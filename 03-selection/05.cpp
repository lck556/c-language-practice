#include<stdio.h>
#include<math.h>
int main()
{
  int x1,x2,x3,y1,y2,y3;
  scanf("%d%d\n%d%d\n%d%d\n",&x1,&y1,&x2,&y2,&x3,&y3);
  double a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)),b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)),c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
  double p=(a+b+c)/2;
  double sum=sqrt(p*(p-a)*(p-b)*(p-c));
  printf("%.0lf",sum);
  return 0;
}