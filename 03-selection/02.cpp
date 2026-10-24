#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a=n/100,b=n/10%10,c=n%10;
  int d=a+b+c,e=d*d,f=d*d*d;
  printf("%d %d %d",d,e,f);
  return 0;
}