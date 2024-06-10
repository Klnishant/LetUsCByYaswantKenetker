#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char *s[] = {
   "To err is human...",
   "But to really mess things up...",
    "One needs to know C!!"
    } ;

    char *buff[100];
    int i,len;

    for (i = 0; i < 3; i++)
    {
       len=strlen(s[i]);

       for (int j = len-1; j >= 0; j--)
       {
        printf("%c",s[i][j]);
       }
       printf("\n");
       
    }

 return 0;
}