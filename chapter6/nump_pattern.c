#include<stdio.h>
int main()
{
int i,j,k;
int px=5;
int py=5;

for ( i = 1; i <= 5; i++)
{
    for ( k = 1; k <= 4-(i-1); k++)
    {
        printf(" ");
    }
    int n=1;
    for ( j = 1; j <= i; j++)
    {
           printf("%d ",n);
           n=n*(i-j)/j;
    }

    printf("\n");
}

 return 0;
}