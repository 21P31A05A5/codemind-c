#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            count+=1;
            break;
        }
    }
    if(count==1)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}