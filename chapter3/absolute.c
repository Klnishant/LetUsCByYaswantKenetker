#include<stdio.h>
int main (){
int n;

printf("enter the number=");
scanf("%d",&n);

if(n<0){
    n=n*-1;
    printf("absolute value of the entered number=%d\n",n);
}

else{
     printf("absolute value of the entered number=%d\n",n);
}

return 0;
}