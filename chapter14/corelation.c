#include<stdio.h>
#include<math.h>

int main()
{
    float x[11]={34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15};
    float y[11]={102.43,100.93,97.43,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65};
    float r,sumx=0,sumy=0,sumxy=0,ssx=0,ssy=0;
    int n=11;

    for (int i = 0; i < n; i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumxy=sumxy+(x[i]*y[i]);
        ssx=ssx+pow(x[i],2);
        ssy=ssy+pow(y[i],2);
    }

    r=(sumxy-sumx*sumy)/(sqrtf((n*ssx)-pow(sumx,2)*((n*ssy)-pow(sumy,2))),2);

    printf("corelation of the given function is %d",r);
    
 return 0;
}