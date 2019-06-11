
#include<stdio.h>
#define max 1001
int main()
{
    int num,power=2;
    scanf("%d",&num);
    
    if(num%2==1)
    {
    printf("1");}

    else
    {
        while((num/power)%2==0)
        {
            power*=2;
        }
        printf("%d",power);
        
    }
}
