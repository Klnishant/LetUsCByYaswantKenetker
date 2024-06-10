#include<stdio.h>
int main()
{
int j=1;
 int n,m;
    int fact=1;

printf("Enter the number:");
scanf("%d",&n);

while (j>0)
{
   
printf("what do you want to this number\n");
printf("1.factorial\n");
printf("2.check prime or not\n");
printf("3.check even or odd\n");
printf("4.Exit\n");

printf("Enter the above option please!:");
scanf("%d",&m);

switch (m)
{
case 1:
for (int i = 1; i <= n; i++)
{
    fact=fact*i;
}
printf("%d\n",fact);
    break;

case 2:
int i;
for (i = 2; i <= n; i++)
{
    if (n%i==0 && i<n)
    {
        printf("not a prime number!\n");
        printf("**********************************\n");
        break;
    }
 else if(i==n)
 {
    printf("prime number!\n");
    printf("**********************************\n");

 }
    
    
}

break;

case 3:
if (n%2==0)
{
    printf("Even number!\n");
    printf("**********************************\n");
}
else
{
    printf("odd number!\n");
    printf("**********************************\n");
}
break;

default:
printf("Exit\n");
printf("**********************************\n");
    break;
}

if(m==4)
break;

}

 return 0;
}