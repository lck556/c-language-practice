#include<stdio.h>
int main()
{
  int a,b,c,d,e;
  int eat =0;
  scanf("%a%b%c%d%e",&a,&b,&c,&d,&e);
  int t=a/3;
  eat=a%3;
  a=t,e+=t,b+=t;
  t=b/3;
  eat+=b%3;
  b=t,a+=t,c+=t;
  t=c/3;
  eat+=c%3;
  c=t,b+=t,d+=t;
  t=d/3;
  eat+=d%3;
  d=t,c+=t,e+=t;
  t=e/3;
  eat+=e%3;
  e=t,a+=t,d+=t;
  printf("%d %d %d %d %d\n%d",a,b,c,d,e,eat);
  return 0;
}