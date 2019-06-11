#include<stdio.h>
int main()
{
int var,fact=1;
scanf("%d",&var);
fact=1;
if(var==0)
{
printf("1");
    return 0;
}
while(var>=1)
{
    fact*=var;
    var--;
}
printf("%d",fact);
}
