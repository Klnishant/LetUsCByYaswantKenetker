#include<stdio.h>
int main()
{
    int p[5]={15,30,28,19,61};
    int t;

    for (int i = 0; i < 4; i++)
    {
        t=p[i];
        p[i]=p[i+2];
        p[i+2]=t;
    }
    
    printf("new array is given below\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",p[i]);
    }
    
 return 0;
}