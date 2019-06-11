#include<stdio.h>
#define max 100000
int main()
{
   int a,b,array[max],i,j;
   scanf("%d %d",&a,&b);
   for( i=0;i<a;i++)
   scanf("%d",&array[i]);
    
   for( i=0;i<a;i++)
   {
       for(j=i+1;j<a;j++ )
       {
           if(array[i]+array[j]==b)
           {printf("yes");return 0;}
       }
   }
   printf("no");return 0;
}
