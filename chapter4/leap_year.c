#include<stdio.h>
int main (){
int y;

printf("enter the year=");
scanf("%d",&y);

if (y%4==0)
{
    printf("entered year is a leap year\n");
}

else
{
    printf("entered year is not a leap year\n");
}


return 0;
}