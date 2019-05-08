#include <iostream>
using namespace std;

void reverse(int a[], int start, int end)
{
    int temp;

    while(start<end)
    { int temp= a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}


void print(int a[],int n)
{
    for (int i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;
}


int main()
{ cout<<"Enter size: ";
  int n;
  cin>>n;

  cout<<"Rotation index: ";
  int d;
  cin>>d;

  int a[n];

  for (int i=0; i<n; i++)
    cin>>a[i];

  reverse(a,0,d-1);
  reverse(a,d,n-1);
  reverse(a,0,n-1);
  print(a,n);


}
