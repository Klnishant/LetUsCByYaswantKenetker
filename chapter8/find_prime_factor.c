#include<stdio.h>
void factor(int a);
int main()
{
int num;
printf("Enter the number:");
scanf("%d",&num);
factor(num);

 return 0;
}

void factor(int a)
{
    int i=2;
    printf("prime factors of %d are",a);

    while (a!=1)
    {
        if (a%i==0)
        {
        printf("%d,",i);
        }
        else
        {
        i++;
        continue;
        }

        a=a/i;
        
    }
  return;  
}