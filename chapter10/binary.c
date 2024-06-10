#include<stdio.h>

int binary(int);
int main()
{
int n;

printf("Enter the positive integer which you want to convert binary:");
scanf("%d",&n);

printf("Binary of %d is given below\n",n);

binary(n);

 return 0;
}

int binary(int n)
{
    int r;

    r=n%2;
    n=n/2;

    if (n==0)
    {
        printf("%d",r);
        
        return(r);
    }
    else
    {
        binary(n);

        printf("%d",r);
    }
    
}