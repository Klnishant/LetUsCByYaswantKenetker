#include<stdio.h>
int main (){
char c;

printf("enter the character=");
scanf("%c",&c);

if ((c>=0 && c<=47) || (c>=58 && c<=64) || (c>=123 && c<=127))
{
    printf("entered character is a special symbol\n");
}

else
{
    printf("entered character is not a special symbol");
}


return 0;
}