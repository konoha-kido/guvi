#include<stdio.h>
int main()
{
char a;
scanf("%c",&a);
 if(a<97)a+=32;
 if(a<97||a>122)
 {printf("invalid");
  return 0;}
 
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')printf("Vowel");
else printf("Consonant");
}
