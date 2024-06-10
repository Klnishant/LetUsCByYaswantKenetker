#include<stdio.h>
#include<math.h>
int main()
{
float p,q,r,a;
int i,n;

for ( i = 1; i <= 10; i++)
{
    printf("Enter the principle amount:");
    scanf("%f",&p);
    printf("Enter the interest rate:");
    scanf("%f",&r);
    printf("Enter the compound period:");
    scanf("%f",&q);
    printf("Enter the year:");
    scanf("%d",&n);

    a=p*(pow(1+(r/(q*100)),n*q));

    printf("Total amount=%f\n\n",a);
}

 return 0;
}