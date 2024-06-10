#include<stdio.h>
#include<math.h>
int main()
{
int x,i;
float sum=0.0;
float log;
float is;

printf("Enter the number:");
scanf("%d",&x);

is=(x-1.0)/x;

for ( i = 2; i <= 7; i++)
{
    log=pow(is,i);

    sum=sum+log;

}
printf("sum of the logrithmic series=%f\n",is+(1/2)*(sum));

 return 0;
}