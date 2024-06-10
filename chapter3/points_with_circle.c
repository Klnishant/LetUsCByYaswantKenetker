#include<stdio.h>
#include<math.h>

int main (){
int x,y,r,x1,y1;
float d;

printf("enter coordinate of center of the circle\n");
printf("x=");
scanf("%d",&x);
printf("y=");
scanf("%d",&y);

printf("enter the radius of the circle=");
scanf("%d",&r);

printf("enter the coordinates of the point\n");
printf("x1=");
scanf("%d",&x1);
printf("y1=");
scanf("%d",&y1);

d=sqrt(pow((x1-x),2)+pow((y1-y),2));

if(d>r){
    printf("point is outside the circle\n");
}
else if(d==r){
    printf("point is on the circle\n");
}
else if(d<r){
    printf("point inside the circle\n");
}

return 0;
}