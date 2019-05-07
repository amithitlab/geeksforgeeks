#include <iostream>
using namespace std;

int main()
{   cout<<"Enter size of array: "<<endl;
    int n;
    cin>>n;

    int a[n];
    cout<<"rotation index: "<<endl;
    int d;
    cin>>d;

    int temp[d];

    cout<<"Enter array"<<endl;
    for  (int i=0; i<d; i++)
        cin>>temp[i];


    for (int i=0; i<n-d; i++)
        cin>>a[i];


    for (int i=0; i<d;i++)
        a[n-d+i]=temp[i];


    for (int i=0; i<n; i++)
        cout<<a[i]<<" ";


}
