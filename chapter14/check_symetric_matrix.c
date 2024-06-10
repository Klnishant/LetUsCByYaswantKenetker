#include<stdio.h>
int main()
{
    int n;
    printf("How long square matrix you want to print:");
    scanf("%d",&n);

    int mtx[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" enter %dX%d element of the matrix:",(i+1),(j+1));
            scanf("%d",&mtx[i][j]);
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",mtx[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j && mtx[i][j]!=0)
            {
                printf("this matrix is not a symetric matrix\n");
            }
            break;
        }
        
    }
    
    
 return 0;
}