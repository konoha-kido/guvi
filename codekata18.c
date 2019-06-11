#include<stdio.h>
int main()
{
int a,b,d=0,sum=0,safe=0;
scanf("%d %d",&a,&b);

for(int i=a;i<b;i++)
{
   sum=0; safe=i;
while(i)
{
    d=i%10;
    sum=sum+d*d*d;
    i/=10;
}
//printf("%d",sum);
if(sum==safe)
printf("%d ",safe);

   d=0;sum=0;i=safe;
}
    
}
