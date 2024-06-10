#include<stdio.h>
int main()
{
int h;
for ( h = 0; h < 24; h++)
{
    if (h==0)
    {
        printf("12 midnight\n");
    }
    
    if (h<12 && h!=0)
    {
        printf("%d AM\n",h);
    }
    if (h==12)
    {
        printf("12 noon\n");
    }
    if (h>12)
    {
        printf("%d PM\n",(h%12));
    }
    
}

 return 0;
}