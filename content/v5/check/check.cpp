#include<cstring>
bool check(char s[])
{
    int len=strlen(s);
    if(len!=2) return false;
    return s[0]=='+'||s[0]=='-'||s[0]=='*'||s[0]=='/';
}