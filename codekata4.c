#include<stdio.h>
int main()
{
char a;
scanf("%c",&a);
 if(a<97)a+=32;
 if(a<97||a>122)
 {printf("No");
  return 0;}
 

else printf("Yes");
}
