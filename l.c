#include<stdio.h>
int *abhay(int a[]);
int main()
{
    int *h;
int a[]={1,2,3,4,5};
h=abhay(a);
printf("%d",*h);


}
int *abhay(int a[])
{
a=a+2;
return a;

}
