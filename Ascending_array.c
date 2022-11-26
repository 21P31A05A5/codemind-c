#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int arr[n],count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            count+=1;
        }
    }
    if(count==n-1)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}
