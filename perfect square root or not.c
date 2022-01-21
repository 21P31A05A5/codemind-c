#include<stdio.h>
int main()
{
    int num,T,i=1,d,S;
    scanf("%d",&num);
    T=num;
    while(i<=num)
    {
        S=i*i;
        if(S==T)
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