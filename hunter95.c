
#include<stdio.h>
#define max 1001
int main()
{
    int i=0,n;
    scanf("%d",&n);

if(n<=2){
printf("0");
return 0;}

int arr[max],prime[max];
for(i=0;i<=n;i++)
{
    arr[i]=1;
}

arr[0]=arr[1]=0;
printf("2");
for(i=3;i<n;i++)
{

    if(arr[i]==1)
    {
        printf(" %d",i);
    
        for(int j=i;j<max;j+=i)
        {
            arr[j]=0;
        }
}
}
}
