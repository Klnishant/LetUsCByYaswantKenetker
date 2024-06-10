#include<stdio.h>
int main (){
int i=1;

while (i<=10)
{
    int h,s;

    printf("\nenter the hour of overtime duty of employee%d=",i);
    scanf("%d",&h);

s=12*h;

    printf("\nover time pay of employee%d=%d\n",i,s);

    i=i+1;
}

return 0;
}