#include<stdio.h>
int main (){
int ra,sa,aa;

printf("enter the age of ram=");
scanf("%d",&ra);

printf("enter the age of shyam=");
scanf("%d",&sa);

printf("enter the age of ajay=");
scanf("%d",&aa);

if(ra<sa){
    if(ra<aa){
        printf("ram is younger than shyam and ajay\n");
    }
    else{
        printf("ajay is younger than ram and shyam\n");
    }
}

if(sa<ra){
    if(sa<aa){
        printf("shyam is younger than ram and ajay\n");
    }
    else{
        printf("ajay is younger than ram and shyam\n");
    }
}


return 0;
}