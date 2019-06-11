#include<stdio.h>
int main()
{
int a,d,sum=0;
scanf("%d",&a);
int safe=a;
while(a)
{
    d=a%10;
    sum=sum*10+d;
    a/=10;
}

if(sum==safe)
printf("yes");
    else printf("no");
}
