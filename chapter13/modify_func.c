#include<stdio.h>

int modify(int *arr,int);
int main()
{
    int z,arr[10]={1,2,3,4,5,6,7,8,9,10};

    z=modify(arr,10);

    printf("modify array is given below\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",arr[i]);

    }
    
    
 return 0;
}

int modify(int *arr,int n)
{
    for (int i = 0; i < 10; i++,arr++)
    {
        *arr=*arr*3;

    }
   return(*arr); 
}