#include<stdio.h>

void selection(int[]);
void bubble(int[]);
void insertion(int[]);

int main()
{
int arr[25];

for (int i = 0; i < 25; i++)
{
    printf("Enter the number%d:",(i+1));
    scanf("%d",&arr[i]);
}
printf("selection short of this number is below\n");
selection(arr);

printf("\nbubble short of this number is below\n");
bubble(arr);

printf("\ninsertion short of this number is below\n");
insertion(arr);

 return 0;
}

void selection(int num[25])
{
    int i,j,t;
    for ( i = 0; i < 25; i++)
    {
        num[i];

        for ( j = (i+1); j < 25; j++)
        {
            num[j];

            if (num[i]>num[j])
            {
                t=num[i];
                num[i]=num[j];
                num[j]=t;
            }
            
        }
        

    }
    for ( i = 0; i < 25; i++)
    {
        printf("%d\t",num[i]);
    }

   return;

}

void bubble(int num[25])
{
    int i,j,k,t;

    for ( i = 0; i < 25; i++)
    {
        for ( j = i; j < 25; j++)
        {
            num[j];

            for ( k = (j+1); k <= (j+1); k++)
            {
                num[k];

                if (num[j]>num[k])
                {
                    t=num[j];
                    num[j]=num[k];
                    num[k]=t;
                }
                
            }
            
        }
        
    }
    for ( i = 0; i < 25; i++)
    {
        printf("%d\t",num[i]);
    }

   return;

}

void insertion(int num[25])
{
    int i,j,k,t;

    for ( i = 0; i < 25; i++)
    {
        num[i];

        for ( j = (i+1); j < 25; j++)
        {
            num[j];

            if (num[i]>num[j])
            {
                t=num[i];
                num[i]=num[j];
                num[j]=t;
            }
            break;
        }
        
    }
    for ( i = 0; i < 25; i++)
    {
        printf("%d\t",num[i]);
    }

 return;
    
}