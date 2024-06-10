#include<stdio.h>
int main()
{
int n;

printf("Enter the number where you want to expand the series:");
scanf("%d",&n);

int arr[n];

for (int i = 0; i < n; i++)
{
    printf("Enter the %d element of the series:",(i+1));
    scanf("%d",&arr[i]);
}
for (int i = 0; i < n; i++)
{
    if (arr[i]!=arr[n-i-1])
    {
        printf("you not entered correct series");
        break;
    }

    else if(i=(n-1))
    {
        printf("you entered correct series");
    }
    
    
}

 return 0;
}