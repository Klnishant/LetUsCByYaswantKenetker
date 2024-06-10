#include<stdio.h>
int main (){
int n,m;
int i=1;
long int p=1;

printf("enter the number1=");
scanf("%d",&n);

printf("enter the number2=");
scanf("%d",&m);

while (i<=m)
{
    p=p*n;
    i++;
}

printf("number1 to the power number2=%d",p);
return 0;
}