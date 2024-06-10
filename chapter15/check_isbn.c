#include<stdio.h>
#include<string.h>

int main()
{
    char str[11];
    int i,j,sum;

    printf("Enter ISBN number of the book:");
    scanf("%s",&str);

    j=2;
    sum=0;

    for ( i = 8; i >= 0; i--)
    {
        sum=sum+(str[i]-'0')*j;
        j++;
    }

    for ( i = 0; i <= 9; i++)
    {
        if ((sum+i)%11==0)
        {
            break;
        }
        
    }

    if (i==str[9]-'0')
    {
        printf("ISBN number is correct\n");
    }
    else
    printf("ISBN numer is not correct\n");
    
 return 0;
}