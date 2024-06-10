#include<stdio.h>
int fun(int,int);
int main()
{
int j,k,z;

printf("enter the numerater:");
scanf("%d",&j);
printf("enter the denumerater:");
scanf("%d",&k);

z=fun(j,k);

printf("GCD of these numbers=%d\n",z);

 return 0;
}

int fun(int j,int k)
{
    int r,m,n=0,d=1,t,u;

    if (k>j)
    {
        m=j;
        j=k;
        k=m;
    }
    else
    {
        if(j==k)
        return(j);
    }
    
    

    while (1)
    {
        d=j/k;
        r=j-(d*k);

       // if((j%k)!=0)
       // n=k;

        if (r==0)
        break;
        
        t=j;
        j=k;
        k=t;

        u=k;
        k=r;
        r=u;

    }
    return(k);
}