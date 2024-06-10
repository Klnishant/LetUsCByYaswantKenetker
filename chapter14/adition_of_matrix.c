#include<stdio.h>
int main()
{
    int n,m;

    printf("How many row you want in the matrix:");
    scanf("%d",&n);
    printf("How many colum you want in the matrix");
    scanf("%d",&m);

    int mtx1[n][m];
    int mtx2[n][m];

    printf("enter the element of first matrix\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%dX%d elements of the matrix:",(i+1),(j+1));
            scanf("%d",&mtx1[i][j]);
        }
        
    }
    
     printf("enter the element of second matrix\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%dX%d elements of the matrix:",(i+1),(j+1));
            scanf("%d",&mtx2[i][j]);
        }
        
    }

    printf("First matrix is given below\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",mtx1[i][j]);
            
        }

        printf("\n");
        
    }

     printf("second matrix is given below\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",mtx2[i][j]);
            
        }

        printf("\n");
        
    }

    int res[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res[i][j]=mtx1[i][j]+mtx2[i][j];
        }
        
    }

     printf("Adition of the matrix is given below\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",res[i][j]);
        }
        
        printf("\n");
    }
 return 0;
}