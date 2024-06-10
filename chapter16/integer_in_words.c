#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void convert(long, char[]);

char *ond[]={" ","one","two","three","four","five","six","seven","eight",
    "nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen",
    "seventeen","eighteen","nineteen"};

    char *twod[]={" "," ","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};


int main()
{
    
    long num;

    printf("Enter the number(maximum 9 digit):");
    scanf("%ld",&num);

    if (num>999999999)
    {
        printf("Please enter correct number!!\n");
        exit(0);
    }

    if (num<0)
    {
        printf("No negetive number please...!!\n");
    }

    else
    {
        convert((num/10000000),"crore");
        convert(((num/100000)%100),"lakh");
        convert(((num/1000)%100),"thousand");
        convert(((num/100)%10),"hundred");
        convert((num%100)," ");
    }
       
 return 0;
}

void convert(long n,char *s)
{
    if (n>19)
    {
        printf("%s %s ",twod[n/10],ond[n%10]);
    }
    else
    printf("%s ",ond[n]);

    if(n)
    printf("%s ",s);
    
}