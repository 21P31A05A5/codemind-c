#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int arr[n],k=0;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==1)
        {
            k=k+arr[i];
        }
    }
    cout<<k;
}