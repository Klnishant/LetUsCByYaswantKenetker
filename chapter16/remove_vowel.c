#include<stdio.h>
#include<string.h>

int main()
{
    char str[81];
    int len,i,j;

    printf("Enter the sentence less than 80 character:");
    gets(str);

    len=strlen(str);

    for ( i = 0; i < len; i++)
    {
        if (str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'||
            str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
        {
            for ( j = i; j < len; j++)
            {
                str[j]=str[j+1];
            }
            i--;
            len--;
        }
        
    }

    printf("New string is\n");
    puts(str);
    
 return 0;
}