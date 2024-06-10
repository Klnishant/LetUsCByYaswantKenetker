#include<stdio.h>
int main()
{
int i,num[25];
int p=0,n=0,e=0,o=0;

for ( i = 0; i < 25; i++)
{
    printf("Enter the num%d:",i+1);
    scanf("%d",&num[i]);
}
for ( i = 0; i < 25; i++)
{
    if (num[i]>=0)
    {
        p=p+1;
    }

    if (num[i]<0)
    {
        n=n+1;
    }

    if (num[i]%2==0)
    {
        e=e+1;
    }
    
    else
    {
        o=o+1;
    }
    
    
}

printf("You entered %d positive integers\n",p);
printf("You entered %d negitive integers\n",n);
printf("You entered %d even integers\n",e);
printf("You entered %d odd integers\n",o);

 return 0;
}