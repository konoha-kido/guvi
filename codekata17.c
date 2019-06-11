#include<stdio.h>
int main()
{
int a,d=0,sum=0;
scanf("%d",&a);
int safe=a;
while(a)
{
    d=a%10;
    sum=sum+d*d*d;
    a/=10;
}
//printf("%d",sum);
if(sum==safe)
printf("yes");
else printf("no");
}
