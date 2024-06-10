#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int len,i,j;

    printf("Enter the sentence:");
    gets(str);

    len=strlen(str);

    for ( i = 0; i < len; i++)
    {
        if ((str[i]=='t' && str[i+1]=='h' && str[i+2]=='e') ||
            (str[i]=='T' && str[i+1]=='H' && str[i+2]=='E') )
        {
            for ( j = i; j < len; j++)
            {
                str[j]=str[j+3];
            }
            i=i-3;
            len=len-3;
        }
        
    }

    printf("New string is\n");
    puts(str);
    
 return 0;
}