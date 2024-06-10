#include<stdio.h>
#include<math.h>

int main()
{
    float x[10]={3.0,4.5,5.5,6.5,7.5,8.5,9.0,9.5,10};
    float y[10]={1.5,2.0,3.5,5.0,6.0,7.5,9.0,10.5,12.0,14.0};
    int n=10;
    float a,b,mx,my,sumxy=0,sumx=0,sumy=0,ssx=0;

    for (int i = 0; i < n; i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumxy=sumxy+(x[i]*y[i]);
        ssx=ssx+(x[i]*x[i]);
    }

    mx=sumx/n;
    my=sumy/n;
    b=((n*sumxy)-(sumx*sumy))/((n*ssx)-(ssx*ssx));
    a=my-b*mx;

    printf("Equation of the line:Y=%f+%fX",a,b);
    
 return 0;
}