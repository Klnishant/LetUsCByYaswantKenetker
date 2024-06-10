#include<stdio.h>
#include<math.h>
void sumavs(int *a,float *b,float *c);
int main()
{
int sum=0;
float avg,s;
avg=s=0.0;

sumavs(&sum,&avg,&s);

printf("sum=%d\n",sum);
printf("average=%f\n",avg);
printf("standard deviation=%f\n",s);

 return 0;
}

void sumavs(int *a,float *b,float *c)
{
    int m,n,o,p,q;
    
printf("Enter the number1:");
scanf("%d",&n);
printf("Enter the number2:");
scanf("%d",&m);
printf("Enter the number3:");
scanf("%d",&o);
printf("Enter the number4:");
scanf("%d",&p);
printf("Enter the number5:");
scanf("%d",&q);
    *a=m+n+o+p+q;
    *b=*a/5;
    *c=(sqrt(pow((m-*b),2)+pow((n-*b),2)+pow((o-*b),2)+pow((p-*b),2)+pow((q-*b),2)))/4;
}