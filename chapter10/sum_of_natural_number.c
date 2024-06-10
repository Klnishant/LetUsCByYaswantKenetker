#include<stdio.h>

int sum(int);

int main()
{
int n=0,z;

z=sum(n);

printf("sum of the natural number is %d",z);

 return 0;
}

int sum(int n)
{
    int s=0;
    if(n==25)
    return(s);
    
    s=n+sum(++n);

    return(s);
}