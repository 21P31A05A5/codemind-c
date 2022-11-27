#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if((arr[i%(n)]%2==0&&arr[(i+2)%(n)]%2!=0)||(arr[i%(n)]%2!=0&&arr[(i+2)%(n)]%2==0))
        {
            c++;
        }
    }
    cout<<c;
}