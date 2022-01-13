#include<stdio.h>
int main()
{
    int n,diagonal;
    // printf("Enter n=");
    scanf("%d",&n);
    diagonal=(n*(n-3)/2);
    printf("%d",diagonal);
    return 0;
}