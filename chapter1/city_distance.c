#include<stdio.h>

int main()
{
    int d1,d2,d3,d4,d5;
    
    printf("distance between two cities in km=");
    scanf("%d",&d1);

d2=d1*1000;

printf("distance between two cities in meteres=%d\n",d2);

d3=d2*3;

printf("distance between two cities in feet=%d\n",d3);

d4=d3*12;

printf("distance between two cities in inches=%d\n",d4);

d5=d2*100;

printf("distance between two cities in centimeteres=%d",d5);

return 0;

}