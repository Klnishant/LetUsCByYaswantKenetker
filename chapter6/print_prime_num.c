#include<stdio.h>
int main()
{
int num,i;

printf("Prime numbers between 1 to 300 is given below\n");

for ( num = 1; num <= 300; num++)
{
    for ( i = 2; i <= num; i++)
    {
        if(num%i==0)
        break;
    }
    if(i==num)
    printf("%d\n",num);

}   
 return 0;
}