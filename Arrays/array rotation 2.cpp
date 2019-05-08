#include <iostream>
using namespace std;


void rotatebyone(int a[], int n)
{
    int temp=a[0];

    for (int i=0; i<n-1;i++)
    {a[i]=a[i+1];
    }

    a[n-1]=temp;

}

void print(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
cout<<endl;
}

int main()
{
    cout<<"Enter size: ";
    int n;
    cin>>n;
    int a[n];

    cout<<"Rotation index: ";
    int d;
    cin>>d;

    for (int i=0; i<n; i++ )
    {
        cin>>a[i];
    }

    for(int i=0; i<d; i++)
    rotatebyone(a,n);
    print(a,n);
}
