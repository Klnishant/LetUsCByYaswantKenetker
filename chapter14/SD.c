#include<stdio.h>
#include<math.h>
int main()
{
    int x[15]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    int sum=0,mean,sd,d=0;

    for (int i = 0; i < 15; i++)
    {
        sum=sum+x[i];
    }

    mean=sum/15;

    for (int i = 0; i < 15; i++)
    {
        d=d+pow((x[i]-mean),2);
    }
    
    sd=sqrt(d/15);

    printf("Standard deviation of the given data:%d",sd);
    
 return 0;
}