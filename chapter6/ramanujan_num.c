#include<stdio.h>
int main()
{
 int i,j,k,l=1;
for ( i = 1; i <=50; i++)
{
    for ( j = 1; j <= 50; j++)
    {
        for ( k = 1; k <= 50; k++)
        {
            for ( l = 1; l <= 50; l++)
            {
                if ((i!=j && i!=k && i!=l) && (j!=i && j!=k && j!=l) && (k!=i && k!=j && k!=l) && (l!=i && l!=j && l!=k))
            {
                if ((i*i*i)+(j*j*j)==(k*k*k)+(l*l*l))
                {
                    printf("rmunujan number is %d,%d,%d,%d\n",i,j,k,l);
                }
            }
            
                
            }
            
        }
        
    }
    
}

 return 0;
}