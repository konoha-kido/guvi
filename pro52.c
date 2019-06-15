
#include<stdio.h>
#include<math.h>
typedef struct point
{
    int x,y;
}Point;
int dist(Point a, Point b)
{
    int dist=sqrt((b.y-a.y)*(b.y-a.y)+(a.x-b.x)*(a.x-b.x));
    return dist;

}
int main()
{
  Point a,b,c,d;int flag=1;
  scanf("%d %d %d %d %d %d %d %d",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y,&d.x,&d.y);

  int ab,bc,cd,da; //sides
  int ac,bd;//diag
  ab=dist(a,b);
  bc=dist(b,c);
  cd=dist(c,d);
  da=dist(d,a);
  ac=dist(a,c);
  bd=dist(b,d);

 //printf("%d %d %d %d\n",ab,bc,cd,da);

  if(ab==bc==cd==da)
  {
    flag=1;

    if(ac!=bd) flag=0;

    if((ac*ac)!=ab*ab+bc*bc)
        flag=0;
    if(bd*bd!=bc*bc+cd*cd)
        flag=0;
  }
  else flag=0;



  if(flag==1)
    printf("yes");
  else printf("no");


}
