#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int product=a*b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        b=b-a;
    }
    int lcm=product/a;
    cout<<lcm<<endl;
    
}

