#include<stdio.h>
#include<math.h>
int main()
{
  double a,b;
  scanf("%lf%lf",&a,&b);
  double k=floor(a/b);
  double r=a-k*b;
  printf("%.10lf",r);
  return 0;
}