#include<stdio.h>
#include<math.h>

int main (){
int theta;

printf("enter the value of theta in degrees=");
scanf("%d",&theta);

float rd;
rd=(theta*3.14)/180;

printf("\n sin(x)=%.2f",sin(rd));
printf("\n cos(x)=%.2f",cos(rd));
printf("\n tan(x)=%.2f",tan(rd));
printf("\n cosec(x)=%.2f",1/sin(rd));
printf("\n sec(x)=%.2f",1/cos(rd));
printf("\n cot(x)=%.2f",1/tan(rd));

return 0;
}