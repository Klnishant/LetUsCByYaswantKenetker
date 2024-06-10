#include<stdio.h>
#include<math.h>

int det(int mtx[100][100],int n);
int main()
{
    int mtx[100][100];
    int z,n=6;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Enter the %dX%d elements of the matrix:",(i+1),(j+1));
            scanf("%d",&mtx[i][j]);
        }
        
    }

    printf("Your entered matrix is given below\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ",mtx[i][j]);
        }
        printf("\n");
    }
    
    z=det(mtx,n);

    printf("%d\n",z);
    
 return 0;
}

int det(int mtx[100][100],int n)
{
    int elm,m=0,res=0,sign=1;
    int r,c;
    int minor[100][100];

    if (n==2)
    {
        res=0;
        res=mtx[0][0]*mtx[1][1]-mtx[0][1]*mtx[1][0];

        return(res);
    }
    
    else
    {
    for (int i = 0; i < n; i++)
    {   r=0,c=0;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (j!=0 && k!=i)
                {
                    minor[r][c]=mtx[i][j];
                    c++;
                }
                if (c>(n-2))
                {
                    r++;
                    c=0;
                }
                
            }
            
        }
       res=res+sign*mtx[i][0]*det(minor,(n-1));
       sign=-1*sign; 
    }

    }
    return(res);    
}