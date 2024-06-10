#include<stdio.h>
int main (){
char c;

printf("enter the alphabet character=");
scanf("%c",&c);

if (c>=97 && c<=122)
{
    printf("entered character is lowercase\n");
}

else
{
    printf("entered character is not a uppercase");
}


return 0;
}