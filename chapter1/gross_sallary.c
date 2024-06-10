#include<stdio.h>

int main()
{
    int d,r; int s;

    printf("sallary from dearness=");
    scanf("%d",&d);

    printf("sallary from home rent=");
    scanf("%d",&r);

    s=(d+r)*100/60;

    printf("gross sallary=%d\n",s);

    return 0;
}