#include<stdio.h>
#include<stdbool.h>
int main()
{
int year=1;
float op1,op2,si,p,sv,yp=1000;
p=6000;
sv=2000;

while(true){
op1=sv+yp*year;
si=p*0.09;
op2=p+si;

if (op1>op2)
{
    break;
}

year++;
}
printf("minimum life of the machine is %d years\n",year-1);
 return 0;
}