#include<stdio.h>
int main()
{
int n,array[1000],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&array[i]);
}
for(i=n-1;i>=0;i--)
{
    printf("%d",array[i]);
    if(i!=0)
    printf("->");
}
}
