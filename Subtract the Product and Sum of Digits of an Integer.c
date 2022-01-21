#include<stdio.h>
int main()
{
    int n,sum=0,rem,product=1;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        product=product*rem;
        n=n/10;
    }
    printf("%d",product-sum);
    return 0;
}