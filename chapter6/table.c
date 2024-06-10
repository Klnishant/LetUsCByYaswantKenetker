#include<stdio.h>
int main()
{
int num,i;

printf("Enter the number:");
scanf("%d",&num);

printf("table of the number of %d is folowing\n",num);

for ( i = 1; i <= 10; i++)
{
    printf("%dx%d=%d\n",num,i,num*i);

}

 return 0;
}