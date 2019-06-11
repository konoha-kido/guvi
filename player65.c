
#include<stdio.h>
#define max 1001
int main()
{
    int i,num,k,array[1000];
    scanf("%d %d",&num,&k);
    
    for(i=0;i<num;i++)
    scanf("%d",&array[i]);
    
    k=num;
    for(i=0;i<num;i++)
    
    {
        if(array[i]<k)
        printf("%d ",array[i]);
    }
}
