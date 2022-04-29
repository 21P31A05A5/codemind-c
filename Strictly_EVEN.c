#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int ar[n],i,c=0;
for(i=0;i<n;i++)
{
    scanf("%d",&ar[i]);
    if(ar[i]%2==0)
    {
        c++;
        ar[i]=0;
    }
}int k;
    for(i=0;i<n;i+=2)
    {
        for(k=0;k<c;k++)
        {
            if(ar[i+1]==0){
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}