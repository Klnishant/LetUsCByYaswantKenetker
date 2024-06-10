#include<stdio.h>
#include<string.h>

int main()
{
    char name[40];
    char *p;
    int i,j=0,len,ln;

    printf("Enter the name:");
    gets(name);

    len=strlen(name);

    printf("%c",name[0]);

    for ( i = 0; i < len; i++)
    {
        if (name[i]==' ')
        {
            printf("%C%C",name[i],name[i+1]);
            ln=i;
        }
        
    }

    for ( i = (ln+2); i < len; i++)
    {
        printf("%c",name[i]);
    }
      
    
    
 return 0;
}