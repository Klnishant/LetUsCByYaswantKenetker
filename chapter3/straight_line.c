#include<stdio.h>
int main (){
int x1,x2,x3,y1,y2,y3,a;

printf("enter the coordinate of first point\n");
printf("x1=");
scanf("%d",&x1);
printf("y1=");
scanf("%d",&y1);

printf("enter the coordinate of second point\n");
printf("x2=");
scanf("%d",&x2);
printf("y2=");
scanf("%d",&y2);

printf("enter the coordinate of third point\n");
printf("x3=");
scanf("%d",&x3);
printf("y3=");
scanf("%d",&y3);

a=x1*(y3-y2)+x2*(y1-y3)+x3*(y2-y1);

if(a==0){
    printf("points are collinear");
}
else{
    printf("points are not collinear");
}
return 0;
}