#include<stdio.h>
int main (){
int m,d;

printf("enter the date and month of birth=");
scanf("%d\t %d",&d,&m);

if (m==12)
{
    if(d>=22){
        printf("zoadic sign is capicorn\n");
    }
    else
    {
        printf("zoadic sign is sagitarius\n");
    }
    
}

if (m==1)
{
    if(d>=20){
        printf("zoadic sign is aquarius\n");
    }
    else
    {
        printf("zoadic sign is capicorn\n");
    }
    
}

if (m==2)
{
    if(d>=18){
        printf("zoadic sign is pisces\n");
    }
    else
    {
        printf("zoadic sign is aquarius\n");
    }
    
}

if (m==3)
{
    if(d>=20){
        printf("zoadic sign is aries\n");
    }
    else
    {
        printf("zoadic sign is pisces\n");
    }
    
}

if (m==4)
{
    if(d>=20){
        printf("zoadic sign is taurus\n");
    }
    else
    {
        printf("zoadic sign is aries\n");
    }
    
}

if (m==5)
{
    if(d>=21){
        printf("zoadic sign is gemini\n");
    }
    else
    {
        printf("zoadic sign is taurus\n");
    }
    
}

if (m==6)
{
    if(d>=21){
        printf("zoadic sign is cancer\n");
    }
    else
    {
        printf("zoadic sign is gemini\n");
    }
    
}

if (m==7)
{
    if(d>=23){
        printf("zoadic sign is leo\n");
    }
    else
    {
        printf("zoadic sign is cancer\n");
    }
    
}

if (m==8)
{
    if(d>=23){
        printf("zoadic sign is virgo\n");
    }
    else
    {
        printf("zoadic sign is leo\n");
    }
    
}

if (m==9)
{
    if(d>=23){
        printf("zoadic sign is libra\n");
    }
    else
    {
        printf("zoadic sign is virgo\n");
    }
    
}

if (m==10)
{
    if(d>=23){
        printf("zoadic sign is scorpio\n");
    }
    else
    {
        printf("zoadic sign is libra\n");
    }
 
}

if (m==11)
{
    if(d>=22){
        printf("zoadic sign is sagittarius\n");
    }
    else
    {
        printf("zoadic sign is scorpio\n");
    }
    
}

return 0;

}