#include<stdio.h>
int main()
{
int i,j,k;
int l=1;

for ( i = 1; i <= 4; i++)
{
    for ( j = 1; j <= 4-i; j++)
    {
        printf(" ");
    }
    for ( k = 4; k >= 4-(i-1); k--,l++)
    {
        printf("%d ",l);

    }

    printf("\n");
}

 return 0;
}