#include<stdio.h>
#include<math.h>

int main()
{
int n1,n2,rem,oct,p;

oct=p=0;

printf("Enter the number=");
scanf("%d",&n1);
n2=n1;

while (n1>0)
{
    rem=n1%8;
    n1=n1/8;
    oct=oct+rem*pow(10,p);

    p++;
}

printf("The octal equivallent of %d is %d\n",n2,oct);

 return 0;
}