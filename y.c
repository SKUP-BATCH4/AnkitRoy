#include<stdio.h>
//char fun(char *[]);
char fun(char *q[])
{
    printf("%s",q);
}

int main()
{

char name[]="kumar";
char *p=&name;
fun(p);
}
