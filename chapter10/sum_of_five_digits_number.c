#include<stdio.h>

int sum(int);
int rsum(int);
int main()
{
int num,z,zr;

printf("Enter five digits number:");
scanf("%d",&num);

z=sum(num);
zr=rsum(num);

printf("sum of five digits without recursion=%d\n",z);
printf("sum of five digits with recursion=%d\n",zr);

 return 0;

}

int sum(int a)
{
    int n=0,r;
    
    while (a>0)
    {
        r=a%10;

        n=n+r;

        a=a/10;
    }
    
    return(n);

}

int rsum(int b)
{
    int sum=0,rem;

    if(b!=0)
    {
    
    rem=b%10;

    sum=sum+rem+rsum(b/10);

    }
    
    return(sum);
}