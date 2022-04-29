#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i+=2)
    {
        if(ar[i]%2!=0)
        {
        printf("False");
        return 0;
        }
    }
    printf("True");
    return 0;
}