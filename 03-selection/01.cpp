#include<stdio.h>
int main()
{
  int r;
  double a=3.14159;
  scanf("%d",&r);
  printf("%.4lf %.4lf %.4lf",(a*r*r),(4*r*r*a),(4*a*r*r*r)/3);
  return 0;
}