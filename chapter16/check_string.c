#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *str[]={
        "We will teach you how to...",
        "Move a mountain",
        "Level a building",
        "Erase the past",
        "Make a million",
        "...all through C!"
    };

    char str1[25],str2[25],t[25],*p;
    

    printf("Enter the first string:");
    scanf("%s",str1);
    printf("Enter the second string:");
    scanf("%s",str2);

    if (strlen(str2)>strlen(str1))
    {
        printf("Enter maximum %d character long second string!\n",strlen(str1));
        exit(0);
    }
    

    for (int i = 0; i < 6; i++)
    {
        p=strstr(str[i],str1);

        if (p)
        {
            strcpy(t,str[i]);
            strcpy(str[i],str2);
            strcpy(str2,t);
            break;
        }
        
    }
    
    
    if (p==NULL)
    {
        printf("No string found\n");
    }

    for (int i = 0; i < 6; i++)
    {
            printf("%s\n",str[i]);
    }
    
 return 0;
}