#include<stdio.h>
int main()
{
    int n,s=0,rem,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        rem=n%10;
        s=s+rem;
        n=n/10;
    }
    if(t%s==0)
    printf("True");
    else
    printf("False");
    
    return 0;
}