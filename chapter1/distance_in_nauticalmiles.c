#include<stdio.h>
#include<math.h>

int main (){
float l1,l2,g1,g2;

printf("write the latitude and lognitude of first palace\n");
printf("latitude=");
scanf("%f",&l1);
printf("\nlognitude=");
scanf("%f",&g1);

printf("write the latitude and lognitude of second palace\n");
printf("latitude=");
scanf("%f",&l2);
printf("\nlognitude=");
scanf("%f",&g2);

int d;
 d=3963*acos(((sin(l1)*sin(l2))+(cos(l1)*cos(l2)))*cos(g2-g1));

printf("distance between place1 and 2=%d\n",d);

return 0;
}