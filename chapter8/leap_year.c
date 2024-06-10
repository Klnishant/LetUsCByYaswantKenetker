#include<stdio.h>
void leap(int a);
int main()
{
int yr;
printf("Enter the year:");
scanf("%d",&yr);
leap(yr);

 return 0;
}

void leap(int a)
{
    if(a%4==0)
    printf("leap year");
    else
    printf("not a leap year");

    return;
}