#include<stdio.h>
int main (){
float w,h,bmi;

printf("enter the weight of the person in kilogram=");
scanf("%f",&w);
printf("enter the height of the person in metere=");
scanf("%f",&h);

bmi=w/(h*h);

if (bmi<15)
{
    printf("bmi category is starvation\n");
}

else if (bmi>=15.1 && bmi<=17.5)
{
    printf("bmi category is anorexic\n");
}

else if (bmi>=17.6 && bmi<=18.5)
{
    printf("bmi category is underweight\n");
}

else if (bmi>=18.6 && bmi<=24.9)
{
    printf("bmi category is ideal\n");
}

else if (bmi>=25 && bmi<=25.9)
{
    printf("bmi category is overweight\n");
}

else if (bmi>=30 && bmi<=30.9)
{
    printf("bmi category is obese\n");
}

else if (bmi>=40)
{
    printf("bmi category is morbidely obese\n");
}

return 0;

}