#include<stdio.h>
void function(float *a,float *b);
int main()
{
float avg,p;
avg=p=0.0;
function(&avg,&p);

printf("Average of marks=%.2f\n",avg);
printf("Percentege of marks=%.2f\n",p);

 return 0;
}

void function(float *a,float *b)
{
    int m1,m2,m3;
   
    printf("Enter the marks out of 100 in subject1:");
    scanf("%d",&m1);
     printf("Enter the marks out of 100 in subject2:");
    scanf("%d",&m2);
     printf("Enter the marks out of 100 in subject3:");
    scanf("%d",&m3);

    *a=(m1+m2+m3)/3;
    *b=*a;
}