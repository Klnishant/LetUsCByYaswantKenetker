#include<stdio.h>
#include<math.h>
int main()
{
int pop,n;
int p=100000;
float r=10;

for ( n = 1; n <= 10; n++)
{
    pop=p/(pow(1+(r/100),n));

    printf("population of the town %d year ago is %d\n",n,pop);
    
}


 return 0;
}