#include<stdio.h>
int main()
{
    int arr[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the %dX%d elements of the matrix:",(i+1),(j+1));
            scanf("%d",&arr[i][j]);
        }

        printf("\n");
        
    }

    int n;

    n=arr[0][0];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j]>n)
            {
                n=arr[i][j];
            }
            
        }
        
        
    }
    
    printf("\n largest number of the matrix is %d",n);

 return 0;
}