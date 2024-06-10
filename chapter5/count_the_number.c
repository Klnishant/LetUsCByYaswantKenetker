#include<stdio.h>
int main()
{
int neg,pos,zero,num;
char ans='y';

pos=neg=zero=0;

while (ans=='y' || ans=='y')
{
    printf("enter the number=");
    scanf("%d",&num);

    if(num>0)
    pos++;

    if(num<0)
    neg++;

    if(num==0)
    zero++;

    fflush(stdin);

    printf("Do you want to continue?=");
    scanf("%c",&ans);

   
}

printf("You entered %d positive numbers\n",pos);
printf("You entered %d negetive numbers\n",neg);
printf("You entered %d zeros numbers\n",zero);


 return 0;
}