#include<stdio.h>
int main()
{
int mtx1[3][3],mtx2[3][3],res[3][3];
res[0][0]=0;

printf("Enter the elements of first matrix\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%dX%d elements of the matrix:",(i+1),(j+1));
        scanf("%d",&mtx1[i][j]);
    }
    
}

printf("Enter the elements of second matrix\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%dX%d elements of the matrix:",(i+1),(j+1));
        scanf("%d",&mtx2[i][j]);
    }
    
}

printf("first matrix is given below\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d ",mtx1[i][j]);
        
    }

    printf("\n");
    
}
printf("second matrix is given below\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d ",mtx2[i][j]);
    }
    printf("\n");
}

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        res[i][j]=0;
    }
    
}

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
        {
            res[i][j]=res[i][j]+mtx1[i][j]*mtx2[k][i];
        }
        
    }
    
}

printf("Multiplication of the matrix is given below\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d ",res[i][j]);
    }
   printf("\n"); 
}

 return 0;
}