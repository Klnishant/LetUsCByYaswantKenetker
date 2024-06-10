#include<stdio.h>
int main()
{
int c,n,m;
printf("Enter the class of student:");
scanf("%d",&c);

printf("in how many subjects he fails:");
scanf("%d",&n);

switch (c)
{
case 1:
if (n>=1 && n<=3)
{
    printf("%d marks given through gress\n",n*5);
}
else
{
    printf("students not take any gress marks\n");
}

    break;

    case 2:
    if (n>=1 && n<=2)
    {
        printf("%d marks given through gress\n",n*4);
    }
    else
    {
        printf("students not take any gress marks\n");
    }
    break;

   case 3:
   if (n==1)
   {
     printf("%d marks given through gress\n",n*5);
   }
   else
   {
    printf("students not take any gress marks\n");
   }
   break;
    

default:
printf("students not take any gress marks\n");
    break;
}
 return 0;
}