#include<stdio.h>
#include<math.h>

int main (){
int x,y;

printf("enter the coordinates of the point\n");
printf("x=");
scanf("%d",&x);
printf("y=");
scanf("%d",&y);

if(x==0 && y!=0){
    printf("points is lie on x axis\n");
}
else if(x!=0 && y==0){
    printf("points is lie on y axis\n");
}
else if(x==0 && y==0){
    printf("point is lie on origin\n");
}
else{
    printf("points is lie in the spaces");
}
return 0;
}