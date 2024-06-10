#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
float s;
 printf("enter the side of triangle");
 printf("\na=");
 scanf("%d",&a);
 printf("\nb=");
 scanf("%d",&b);
 printf("\nc=");
 scanf("%d",&c);

 s=(a+b+c)/2;

 printf("area of triangle=%f\n",sqrt(s*(s-a)*(s-b)*(s-c)));

 return 0;

}