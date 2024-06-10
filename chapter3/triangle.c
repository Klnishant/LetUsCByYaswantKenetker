#include<stdio.h>
int main (){
int theta1,theta2,theta3;

printf("enter the angle of triangle\n");
printf("x=");
scanf("%d",&theta1);
printf("y=");
scanf("%d",&theta2);
printf("z=");
scanf("%d",&theta3);

if(theta1+theta2+theta3==180){
    printf("triangle is valid\n");
}

else{
    printf("triangle is not valid");
}

return 0;
}