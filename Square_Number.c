#include<stdio.h>
int main()
{
    int n,d,i=1,s=0;
    scanf("%d",&n);
    while(i<=n/2)
    {
        s=i*i;
        if(s==n)
        {
            d=1;
        }
        i++;
    }
    if(d==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}