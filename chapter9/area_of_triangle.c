#include<stdio.h>
#include<math.h>

float area(int a,int b,int c,float s);
int main()
{
int a,b,c;
float s;

printf("Enter the side1:");
scanf("%d",&a);
printf("Enter the side2:");
scanf("%d",&b);
printf("Enter the side3:");
scanf("%d",&c);

s=(a+b+c)/2;

area(a,b,c,s);

 return 0;
}

float area(int a,int b,int c,float s)
{
    float result;

    result=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of triangle=%f",result);

    return(result);

}