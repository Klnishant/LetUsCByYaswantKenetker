#include<stdio.h>
int main()
{
int i,j,n;
n=78;

for ( i = 1; i <= 7; i++)
{
    for ( j = 1; j <= 13; j++)
    {
        if (i==1)
        {
            if (j<=7)
            {
                printf("%c ",j+64);
            }
            else if(j!=7)
            {
                printf("%c ",78-j);
            }   
        }
        else
        {
        if (j<=6-(i-2))
        {
            printf("%c",j+64);
        }
        else if(j!=7)
        {
            printf(" ");
        }
        
        
        
        if (j>=8+(i-2))
        {
            printf("%c",n-j);

        }
        else
        {
            printf(" ");
        }
        
        
        }
        

    }
    printf("\n");
    
}

 return 0;
}