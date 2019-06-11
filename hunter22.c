#include<stdio.h>
int main()
{
int n,i,array[1000],product=1;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&array[i]);
    product*=array[i];
}
for(i=0;i<n;i++)
{
    printf("%d ",product/array[i]);
}
}
