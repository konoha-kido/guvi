#include<stdio.h>
int main()
{
char a[10];
int size;
scanf("%s",a);
size=sizeof(a)/sizeof(a[0]);

for(int i=0;i<size;i++)
{
 if(a[i]<97)a[i]+=32;
 else a[i]-=32;
}
 
 printf("%s",a);
}
