#include<stdio.h>
int main()
{
    int n,r,i=1;
    scanf("%d%d",&n,&r);
    while(i<=r)
    {
        if(i%2!=0)
       {
           printf("%d x %d = %d
",n,i,n*i);
       }
       i++;
    }
}