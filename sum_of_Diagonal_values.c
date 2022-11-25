#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    int arr[n][m];
    int di=m/2+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==j||i+j==m+1)
            {
                sum+=arr[i][j];
            }
        }
    }
    cout<<sum;
    // if(m%2==0)
    // {
    //     cout<<sum;
    // }
    // else
    // {
    //     cout<<sum-arr[di][di];
    //}
}