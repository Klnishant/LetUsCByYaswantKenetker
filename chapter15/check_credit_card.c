#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i,j,sum=0,nsum=0,tsum,digit;

    printf("Enter the crdit card number:");
    scanf("%s",&str);

    for ( i = 15; i >= 0; i--)
    {
        digit=str[i]-'0';
        if (i%2==0)
        {
            tsum=digit*2;
            digit=tsum<10?tsum:tsum-9;
        }
        sum+=digit;
    }

    printf("%d\n",sum);

    if (sum%10==0)
    {
        printf("Entered credit card number is correct\n");
    }

    else
    printf("Enterd credit card number is not correct\n");
       
 return 0;
}