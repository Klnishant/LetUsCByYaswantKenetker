#include<stdio.h>

void fibonacci(int,int);

int main()
{
    int o=0,p=1,n;

    printf("%d",p);

fibonacci(o,p);

 return 0;
}


void fibonacci(int a,int b)
{
    
static int terms=2;
int c;

if (terms<=25)
{
c=a+b;

printf(" %d",c);

terms++;

fibonacci(b,c);
}

else
return;

    
}