
#include<stdio.h>
#define max 1001
int main()
{
   int a,b,array[max];
   scanf("%d %d",&a,&b);
   for(int i=0;i<a;i++)
   scanf("%d",&array[i]);
    
   for(int i=0;i<a-b;i++)
   printf("%d ",array[i]);
}
