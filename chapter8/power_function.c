#include<stdio.h>
#include<math.h>

int power(int a,int b);

int main()
{
int m,n;
printf("Entr the value of base:");
scanf("%d",&m);
printf("Enter the value of power:");
scanf("%d",&n);

power(m,n);

 return 0;
}

int power(int a,int b){
    int r;
    r=pow(a,b);

    printf("%d to the power %d is %d\n",a,b,r);
return r;
}