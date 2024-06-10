#include<stdio.h>
int main (){
char ch;

printf("enter the character=");
scanf("%c",&ch);

if(ch>=65 && ch<=90){
    printf("entered character is upper case alphabet\n");
}

else if(ch>=97 && ch<=122){
    printf("entered character is lowercase alphabet\n");
}

else if(ch>=48 && ch<=57){
    printf("entered character is a digit\n");
}

else if((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=123 && ch<=127)){
    printf("entered character is a special symbol\n");
}
return 0;
}