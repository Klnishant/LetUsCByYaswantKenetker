#include<stdio.h>
int main()
{
int i=1,a,b,c;

printf("Armstrong number between 1 to 500 are below\n");

while (i<=500)
{
    a=i%10;
    b=i/10;
    b=b%10;
    c=i/100;

    if ((a*a*a)+(b*b*b)+(c*c*c)==i)
    {
        printf("%d\n",i);
    }
  i++;  
}

 return 0;
}