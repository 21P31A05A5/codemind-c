#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]%6==0)
        {
            str[i]='9';
            break;
        }
    }printf("%s",str);
}