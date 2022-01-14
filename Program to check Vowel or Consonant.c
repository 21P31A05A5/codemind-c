#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch=='a')||(ch=='A')||(ch=='E')||(ch=='e')||(ch=='I')||(ch=='i')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U'))
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}