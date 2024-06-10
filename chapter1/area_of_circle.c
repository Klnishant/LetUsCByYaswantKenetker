#include<stdio.h>

int main()
{
    int r;
    float a;

    printf("radius of circle=");
    scanf("%d",&r);
    
    a=3.14*r*r;

    printf("area of circle=%f",a);

    return 0;
}