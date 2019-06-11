#include<stdio.h>
int main()
{
int n,array[1000],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
    if((i%2==0 )&& (array[i]%2!=0))
    printf("%d ",array[i]);
    
    if( (i%2==1) && (array[i]%2==0))
    printf("%d ",array[i]);
    
}
}
