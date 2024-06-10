#include<stdio.h>
#include<string.h>

int main()
{
    char fib[50];
    char firstterm[50]="a";
    char lastterm[50]="b";
    char t;

    for (int i = 0; i < 5; i++)
    {
        if (i==0)
        {
            printf("%s\t",firstterm);
        }
        if (i==1)
        {
            printf("%s\t",lastterm);
        }
        
        else if(i>=2)
        {
            strcpy(fib,lastterm);
            strcat(fib,firstterm);
            printf("%s\t",fib);
            strcpy(firstterm,lastterm);
            strcpy(lastterm,fib);
        }
    }
    
 return 0;
}