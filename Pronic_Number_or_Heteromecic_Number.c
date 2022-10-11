#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=0;
    for(int i=1;i<sqrt(n);i++)
    {
        if(n==i*(i+1)){
            k=1;    break;
        }
    }
    if(k==1)
    cout<<"YES";
    else
    {
        cout<<"NO";
    }
}