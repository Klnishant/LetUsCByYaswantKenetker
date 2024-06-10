#include<stdio.h>
int main (){
int y,fd,ld;
long int td,nd;

printf("enter the year=");
scanf("%d",&y);

nd=(y-1)*365;
ld=(y-1)/4-(y-1)/100+(y-1)/400;
td=nd+ld;
fd=td%7;

if(fd==0){
    printf("first day of this year is monday");
}

if(fd==1){
    printf("first day of this year is tuesday");
}

if(fd==2){
    printf("first day of this year is wednesday");
}

if(fd==3){
    printf("first day of this year is thursday");
}

if(fd==4){
    printf("first day of this year is friday");
}

if(fd==5){
    printf("first day of this year is saturday");
}

if(fd==6){
    printf("first day of this year is sunday");
}
return 0;
}