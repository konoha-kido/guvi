#include<stdio.h>
int main()
{

int year;scanf("%d",&year);

if(year%4==0)
{
if(year%100!=0)
{printf("yes");return 0;}

else
{
if(year%400==0)
{
printf("yes");return 0;
}
else {printf("no"); return 0;}
}
}
else printf("no");
}