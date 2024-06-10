#include<stdio.h>
int main (){
    int c,d,e;

    printf("enter the number at the adress c=");
    scanf("%d",&c);
    printf("\nenter the number at the adress d=");
    scanf("%d",&d);

    e=c;
    c=d;
    d=e;

    printf("new number at the adress c=%d\n",c);
    printf("new number at the adress d=%d\n",d);
    
return 0;
}