#include<stdio.h>
int main ()
{
int n, remider, Largest= 0;
scanf ("%d", &n);
while (n > 0)
    {
remider = n % 10;
if (Largest < remider)
 {
       Largest = remider;
 }
n = n / 10;
    }
printf ("%d ", Largest);
return 0;
}