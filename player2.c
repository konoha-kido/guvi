#include<stdio.h>
int main()
{
int a,fact=1;
scanf("%d",&a);
fact=1;
if(a==0){
printf("1");return 0;}
while(a>=1)
{
    fact*=a;
    a--;
}
printf("%d",fact);
}
