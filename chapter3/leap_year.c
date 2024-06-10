#include<stdio.h>
int main (){

int y;

printf("enter the year=");
scanf("%d",&y);

if(y%4==0){
    printf("%d year is leap year\n",y);
}

else{
    printf("%d is not a leap year\n",y);
}

return 0;
}