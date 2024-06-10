#include<stdio.h>
#include<math.h>

int power(float a, int b);
int factorial(int c);

int main()
{
int i,j;
float x,n,a,b,sum=0.0;

printf("Enter te number:");
scanf("%f",&x);
x=x*3.14/180;

for ( i = 1, j=1; i <= 10; i++,j+=2)
{
    a=power(x,j);
    b=factorial(j);

    n=a/b;

    if (i%2==0)
    {
        sum=sum-n;
    }
    else
    {
        sum=sum+n;
    }
    
}

printf("sum of the series=%f\n",sum);

 return 0;
}

int power(float a,int b)
{
    int k=1;
    float p=1;
   for ( k = 1; k <= b; k++)
   {
    p*=a;
   }
   

    return(p);
}

int factorial(int c)
{
    int m=1;
    float fact=1;
    for ( m = 1; m <= c; m++)
    {
        fact=fact*m;
    }
    
    return(fact);

}