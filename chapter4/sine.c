#include<stdio.h>
#include<math.h>
int main (){
int x;
float y;

printf("enter the angle in degrees=");
scanf("%d",&x);

y=x*3.14/180;

if ((pow(sin(y),2)+pow(cos(y),2))==1)
{
    printf("sum of square of sine and cosine is=1\n");
}

else{
    printf("sum of square of sine and cosine is not=1\n");
}

return 0;
}