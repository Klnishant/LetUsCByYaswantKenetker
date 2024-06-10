#include<stdio.h>
void shift(int *a,int *b,int *c);
int main()
{
int x,y,z;
printf("Enter the value of number1:");
scanf("%d",&x);
printf("Enter the value of number2:");
scanf("%d",&y);
printf("Enter the value of number3:");
scanf("%d",&z);

shift(&x,&y,&z);

printf("number1=%d\n number2=%d\n number3=%d\n",x,y,z);

 return 0;
}

void shift(int *a,int *b,int *c)
{
    int m,n,o;

    m=*a;
    *a=*b;
    *b=m;

    n=*a;
    *a=*c;
    *c=n;

}