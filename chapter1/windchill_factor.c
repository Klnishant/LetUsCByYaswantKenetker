#include<stdio.h>
#include<math.h>

int main (){
float t,v;

printf("enter the temprature=");
scanf("%f",&t);

printf("enter the velocity of wind =");
scanf("%f",&v);

float wcf;
wcf=35.740+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
printf("\nwind chill factor=%.2f\n",wcf);

return 0;
}