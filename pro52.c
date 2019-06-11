
#include<stdio.h>
#include<math.h>
int dist(int a,int b, int x, int y)
{
    int dist=sqrt((y-b)*(y-b)+(x-a)*(x-a));
    return dist;

}
int main()
{
  int x1,x2,x3,x4,y1,y2,y3,y4;
  scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);

  int la,lb,lc,ld;
  la=dist(x1,y1,x2,y2);
  lb=dist(x1,y1,x4,y4);
  lc=dist(x3,y3,x2,y2);
  ld=dist(x4,y4,x2,y2);

 //printf("%d %d %d %d",la,lb,lc,ld);

  if(la==lb==lc==ld)
  {

      printf("yes");
  }
  else printf("no");
}
