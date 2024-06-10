#include<stdio.h>
#include<math.h>

int main (){
int a,
b,c;

printf("enter the sides if triangle\n");
printf("a=");
scanf("%d",&a);

printf("b=");
scanf("%d",&b);

printf("c=");
scanf("%d",&c);

if (a==b && b==c && c==a)
{
    printf("triangle is equilateral\n");
}

 if (a!=b && b!=c && c!=a)
{
    printf("triangle is isoscels\n");
}

 if ((a==b && c!=a) || (a!=b &&c==a) || (a==b && b!=c))
{
    printf("triangle is scalene\n");
}

if ( (a==sqrt(b+c)) || (b==sqrt(a+c)) || (c==sqrt(a+b)))
{
    printf("triangle is right angled\n");
}
return 0;
}