#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a,b;
    cin>>a>>b;
    int status=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            cout<<arr[i]<<" ";
            status=1;
        }
    }
    if(status==0)
    {
        cout<<-1;
    }
}