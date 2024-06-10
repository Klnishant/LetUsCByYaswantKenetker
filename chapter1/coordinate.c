#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,r,theta;
    printf("write the cartesian point");
    printf("\nx=");
    scanf("%f",&x);

    printf("\ny=");
    scanf("%f",&y);

r=sqrt(x*x+y*y);
theta=atan(x/y);

printf("polar coordinates=(%f,%f)",r,(theta*180)/3.14);

return 0;

}
