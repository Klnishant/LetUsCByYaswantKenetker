#include<stdio.h>
int main()
{
int arr[25];
int i,j,n;

for (int i = 0; i < 25; i++)
{
    printf("Enter the %d integer of an array:",(i+1));
    scanf("%d",&arr[i]);

}
    int *p;

    p=arr;
 
  n=*p;

    for ( i = 0; i < 25; i++)
    {
        if (n>*p)
        {
            n=*p;
        }

        p++;
        
    }

    printf("smallest number in array:%d\n",n);
    
        
 return 0;
}