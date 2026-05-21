#include<cstdio>
#include "../include/head.h"
int main()
{
    printf("请输入你要执行的加减乘除符号(+-*/):\n");
    char s[10];
    fgets(s,sizeof(s),stdin);
    while(!check(s))
    {
        printf("请重新输入正确格式的符号:\n");
        fgets(s,sizeof(s),stdin);
    }
    printf("请输入两个进行计算的数字:\n");
    double x,y;
    scanf("%lf%lf",&x,&y);
    switch(s[0])
    {
        case '+':
            printf("%.2f",add(x,y));
            break;
        case '-':
            printf("%.2f",sub(x,y));
            break;
        case '*':
            printf("%.2f",mul(x,y));
            break;
        case '/':
            printf("%.2f",div(x,y));
            break;
    }
    puts("");
    return 0;
}