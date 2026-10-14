#include<stdio.h>
int main()
{
    char cur;
    scanf("%c",&cur);
    if(cur>='0'&&cur<='9')
    {
        printf("%d",cur);
    }
    else if(cur>='A'&&cur<='Z')
    {
        printf("%c",cur+32);
    }
    else if(cur>='a'&&cur<='z')
    {
        printf("%c",cur-32);
    }
    else
    {
        printf("-1");
    }
    return 0;
}