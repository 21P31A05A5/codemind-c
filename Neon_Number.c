#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,sum=0;
    cin>>n;
    h=n*n;
    while(h!=0)
    {
        sum=sum+(h%10);
        h=h/10;
    }
    if(sum==n)
    {
        cout<<"Neon Number";
    }
    else
    {
        cout<<"Not Neon Number";
    }
}

