#include<stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
int safe=a;
while(b-1)
{
    a*=safe;
    b--;
}
printf("%d",a);
}
