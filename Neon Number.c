#include<stdio.h>
int main()
{
    int n,rem,sum=0,squre;
    scanf("%d",&n);
    squre=n*n;
    while(squre!=0)
    {
    rem=squre%10;
    sum=sum+rem;
    squre=squre/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}