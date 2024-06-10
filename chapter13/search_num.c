#include<stdio.h>
int main()
{
int num[25];
int n,sum=0;

for (int i = 0; i < 25; i++)
{
    printf("Enter the %d number of array:",(i+1));
    scanf("%d",&num[i]);
}

printf("Enter the number you want to search:");
scanf("%d",&n);

for (int i = 0; i < 25; i++)
{
    if (num[i]==n)
    {
        sum=sum+1;
    }
    
}

printf("%d is presented %d times in array num\n",n,sum);


 return 0;
}