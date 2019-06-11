#include<stdio.h>
int main()
{
int n,k,sum=0;
scanf("%d %d",&n,&k);
int array[100];
for(int i=0;i<n;i++)
{
    scanf("%d",&array[i]);
    if(i<k)
    sum=sum+array[i];
}

printf("%d",sum);
}
