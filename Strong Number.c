#include<stdio.h>
int main(){
    int num,temp,fac,r,f,sum=0,i;
    scanf("%d",&num);
    temp=num;
    while(num>0){
        fac=1;
        r=num%10;
        for(i=1;i<=r;i++){
            fac=fac*i;
            
        }sum=sum+fac;
        num=num/10;
    }if(sum==temp){
        printf("The number %d is a strong number",temp);
    }else
    printf("The number %d is not a strong number",temp);
}