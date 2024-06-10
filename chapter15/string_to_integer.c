#include<stdio.h>
#include<string.h>

int main()
{
    int n,num=0;
    printf("How much long string do you want:");
    scanf("%d",&n);

    char strng[n];

    printf("Enter the string containing numbers:");
    scanf("%s",&strng);

    for (int i = 0; strng[i]!='\0' ; i++)
    {
        if (strng[i]>=48 && strng[i]<=57)
        {
            num=num*10+(strng[i]-48);
        }
        
        else
        {
            printf("Not a valid stiring\n");
            return 1;
        }
        
    }

    printf("The number is %d",num);
        
 return 0;
}