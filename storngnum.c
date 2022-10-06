#include<stdio.h>
int main()
{
    int n;
    printf("enter the number " );
    scanf("%d",&n);
    //printf("%d",sum(n));
if(n==sum(n))
{
    printf(" it's strong num");
}
else
{
    printf(" it's not strong number");
}
}
int sum(int n)
{

    int last,sum=0;
    while(n!=0)
    {
        last=n%10;
        n=n/10;
        sum=sum+fact(last);

    }
    return sum;
    }



    int fact(int n)
    {
        int fac=1,i;
        for(i=1;i<=n;i++)
        {


        fac=fac*i;
        }
        return fac;
    }

