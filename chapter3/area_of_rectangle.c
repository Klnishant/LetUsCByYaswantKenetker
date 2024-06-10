#include<stdio.h>
int main (){
int l,b,a,p;

printf("enter the value of length and breadth of rectangle\n");
printf("l=");
scanf("%d",&l);
printf("b=");
scanf("%d",&b);

a=l*b;
p=2*(l+b);

if(a>p){
    printf("area is greater than perimetere\n");
}

else{
    printf("area is lesser than perimetere\n");
}

return 0;
}