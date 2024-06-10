#include<stdio.h>
int main()
{
    int n,m;

    printf("How many row of the matrix you want?:");
    scanf("%d",&n);

    printf("How many column of the matrix you want?:");
    scanf("%d",&m);

    int mtx[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter the %dX%d elements:",(i+1),(j+1));
            scanf("%d",&mtx[i][j]);
        }
        
    }

    printf("%dX%d matrix are below\n",n,m);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t",mtx[i][j]);
        }
        
        printf("\n");
    }

    int r=0,c=0,t;

    while (r<m)
    {
        for (int i = (r+1); i < n; i++)
        {
            t=mtx[r][i];
            mtx[r][i]=mtx[i][r];
            mtx[i][r]=t;

        }

        r++;
    }

    printf("transpose of the matrix is\n",m,n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",mtx[i][j]);
        }
        
        printf("\n");

    }
    
    
 return 0;
}