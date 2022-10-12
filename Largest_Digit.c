#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rem,max=0;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        if(rem>max)
        {
            max=rem;
        }
        n=n/10;
    }
    cout<<max;
}

