#include<stdio.h>
int main()
{
    int rev,n,t,i,num,rem;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        rev=0;
        scanf("%d",&n);
        t=n;
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        if(t==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}