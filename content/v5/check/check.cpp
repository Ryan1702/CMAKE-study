#include<cstring>
bool check(char s[])
{
    s[strcspn(s,"\n")]='\0';
    int len=strlen(s);
    if(len!=1) return false;
    return s[0]=='+'||s[0]=='-'||s[0]=='*'||s[0]=='/';
}