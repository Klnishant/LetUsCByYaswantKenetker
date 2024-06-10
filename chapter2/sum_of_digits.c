#include<stdio.h>

int main()
{
   long long int a,n;
   long long int sum=0;

    printf("enter the five digits number=");
    scanf("%d",&n);

    a=n%10;
    n=n/10;
    sum=sum+a;

    a=n%10;
    n=n/10;
    sum=sum+a;

    a=n%10;
    n=n/10;
    sum=sum+a;

    a=n%10;
    n=n/10;
    sum=sum+a;

    a=n%10;
    n=n/10;
    sum=sum+a;

printf("sum=%d",sum);

    return 0;

}