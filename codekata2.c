#include<stdio.h>
int main()
{
int num;
scanf("%d",&num);
if((num&1)==num)printf("even");
else printf("odd");
}
