#include<stdio.h>
int main (){
int a,b,c,s,ls;

printf("enter the sides if triangle\n");
printf("a=");
scanf("%d",&a);

printf("b=");
scanf("%d",&b);

printf("c=");
scanf("%d",&c);

if (a>b && b>c)
{
    s=b+c;
    ls=a;
}

else if (a>b && b<c && a>c)
{
    s=b+c;
    ls=a;
}

else if (a<b && b<c)
{
    c=b+a;
    ls=c;
}

else if (a>b && b<c && c>a)
{
    s=b+a;
    ls=c;
}

else if (a<b && b>c)
{
    s=a+c;
    ls=b;
}

else if (a>c && b>c && b>a)
{
    s=a+c;
    ls=b;
}

if (s>ls)
{
    printf("triangle is valid\n");
}

else
{
    printf("triangle is invalid!\n");
}

return 0;
}