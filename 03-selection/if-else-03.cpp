#include<stdio.h>
int main()
{
    int a, b, r;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(b==0&&c=='/')
    {
        printf("Divided by zero!");
    }
    else if(c!='+'&&c!='-'&&c!='*'&&c!='/')
    {
        printf("Invalid operator!");
    }
    else 
    {
        if(c=='+')  r=a+b;
        else if(c=='-')  r=a-b;
        else if(c=='*')  r=a*b;
        else  r=a/b;
        printf("%d",r);
    }
    return 0;
}