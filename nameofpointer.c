#include<stdio.h>
int main()
{

char name[100];
printf("enter the elements :");
scanf("%s",&name);
char *p=&name;
printf(p);


}
char fun( char *name[] )
{
    printf("%s",name);
}
