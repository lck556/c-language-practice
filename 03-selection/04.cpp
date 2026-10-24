#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  double x;
  //pow为幂函数
  scanf("%lf%d",&x,&n);
  int a=x*pow(10,n);
  int b=a%10;
  printf("%d",b);
  return 0;
}