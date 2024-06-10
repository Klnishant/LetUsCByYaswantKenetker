#include<stdio.h>
void prime(int);
void rprime(int);

int main()
{
int n,z,rz;

printf("Enter the value of num1:");
scanf("%d",&n);

printf("prime factors of these number without recursion is the given below\n");
prime(n);

printf("\nprime factors of these number with recursion is the given below\n");
rprime(n);

 return 0;
}

void prime(int a)
{
int i,j;

for ( i = 2; i <= a; i++)
{
        while ((a%i)==0)
        {
            printf("%d ",i);

            a=(a/i);
            
        }   
    
    
    
}

return;

}

void rprime(int b)
{
   static int i=2;

    if (i<=b)
    {
        if (b%i==0)
        {
            printf("%d ",i);

            b=b/i;
        }
        
        else
        i++;

        rprime(b);
    }
    

    return;
    
}