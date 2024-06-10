
#include<stdio.h>
int main()
{
    
int n1,n2,i;
float sum,fact;
sum=0.0;

for ( n1 = 1; n1 <= 7; n1++)
{
    fact=1.0;

    for ( i = 1; i < n1; i++)
    {
        fact=fact*i;
    }
    sum=sum+(n1/fact);
}
printf("Sum of the series=%f",sum);

 return 0;
}