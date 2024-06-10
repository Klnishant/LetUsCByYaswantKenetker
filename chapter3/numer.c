#include<stdio.h>
int main (){
long int n,a,i;
long int rev=0;

printf("enter the five digit number=");
scanf("%d",&n);

i=n;

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

printf("reverse number=%d\n",rev);

if(i==rev){
    printf("entered number and reversed number are same\n");
}

else{
    printf("enterd number and reversed number are not same\n");
}

return 0;
}