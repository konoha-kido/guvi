#include<stdio.h>
int main()
{
char rom[20];int sum=0;
scanf("%s",rom);
int size=sizeof(rom)/sizeof(rom[0]);
for(int i=0;i<size;i++)
{
    if(rom[i]=='I')
    sum+=1;
    else if(rom[i]=='V')
    sum+=5;
    else if(rom[i]=='X')
    sum+=10;
}
printf("%d",sum);
}
