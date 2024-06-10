#include<stdio.h>
#include<math.h>

int main()
{
    float x[10],y[10],d[10],sum;

    printf("Enter the point below\n");

    for (int i = 0; i < 10; i++)
    {
        printf("X%d:",(i+1));
        scanf("%d",&x[i]);

        printf("Y%d",(i+1));
        scanf("%d",&y[i]);

    }

    for (int i = 0; i < 9; i++)
    {
        d[i]=sqrt(pow((x[i+1]-x[i]),2)+pow((y[i+1]-y[i]),2));
    }

    for (int i = 0; i < 9; i++)
    {
        sum=sum+d[i];
    }
    
    printf("Distance between firs and last point is %f",sum);
    
 return 0;
}