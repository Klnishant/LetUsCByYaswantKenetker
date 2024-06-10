#include<stdio.h>

int main()
{
    long long int a,n;
    long long int rev=0;;

    printf("enter the five digits number=");
    scanf("%d",&n);

    a=n%10;
    n=n/10;
    rev=rev+a*10000;

    a=n%10;
    n=n/10;
    rev=rev+a*1000;
    
    a=n%10;
    n=n/10;
    rev=rev+a*100;
    
    a=n%10;
    n=n/10;
    rev=rev+a*10;
    
    a=n%10;
    n=n/10;
    rev=rev+a*1;

    printf("reverse digit=%d\n",rev);

return 0;    
}