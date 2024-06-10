#include<stdio.h>
int factorial(int a);

int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
factorial(n);

 return 0;
}

int factorial(int a){
    int i;
    int fact=1;

    for ( i = 1; i <= a; i++)
    {
        fact=fact*i;
    }
    printf("factorial of the entered number is %d\n",fact);
return fact;
}