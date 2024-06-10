#include<stdio.h>
int main()
{
int i,j,k;

for ( i = 1; i <=30; i++)
{
    for ( j = 1; j <= 30; j++)
    {
        for ( k = 1; k <= 30; k++)
        {
            if ((i*i)+(j*j)==(k*k))
            {
                printf("\n\nthe side of the triplets are below\n");
                printf("a=%d\n",i);
                printf("b=%d\n",j);
                printf("c=%d\n",k);
            }
            
        }
        
    }
    
}

 return 0;
}