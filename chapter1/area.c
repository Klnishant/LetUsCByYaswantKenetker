#include<stdio.h>

int main()
{
    int l,b,a,p;
float r,a2,c;

    printf("length of rectangle=\n");
    scanf("%d",&l);

printf("width of rectangle=\n");
scanf("%d",&b);
a=l*b; 
p=l+b; 

printf("radius of circle=\n");
scanf("%f",&r);
a2=3.14*r*r;
c=2*3.14*r;

printf("area of rectangle=%d\n",a);
printf("perimetere of the rectangle=%d\n",p);

printf("area of the circle=%f\n",a2);
printf("circumfrence of circle=%f\n",c);

return 0;
}