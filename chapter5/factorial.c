#include<stdio.h>
int main (){
int i=1,n,f=1;

printf("enter the number you want to find factorial n=");
scanf("%d",&n);

while (i<=n)
{
    f=f*i;
    i=i+1;
}

printf("factorial=%d",f);

return 0;
}