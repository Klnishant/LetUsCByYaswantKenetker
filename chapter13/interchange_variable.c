#include<stdio.h>
int main()
{
int n,t;

printf("How long you want to enter the number:");
scanf("%d",&n);

int arr[n];

for (int i = 0; i < n; i++)
{
    printf("Enter the number%d:",(i+1));
    scanf("%d",&arr[i]);
}

printf("interchange variable of the array is given below\n");

for (int i = 0; i < n; i=i+2)
{
    t=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=t;

    
}

for (int i = 0; i < n; i++)
{
    printf("%d\t",arr[i]);
}


 return 0;
}