#include<stdio.h>
int main()
{
int arr[100];
int i;

for (int i = 1; i <= 100; i++)
{
    arr[i]=(i);
}

i=2;

while ((i*i)<=100)
{
    if (arr[i]!=0)
    {
        for (int j = 2; j < 100; j++)
        {
            if (arr[i]*j>100)
            
                break;
            else
            arr[(arr[i])*j]=0;
        }
        
    }
   i++; 
}

for ( i = 2; i < 100; i++)
{
    if (arr[i]!=0)
    {
        printf("%d\t",arr[i]);
    }
    
}

return 0;

}