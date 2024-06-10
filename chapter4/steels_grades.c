#include<stdio.h>
int main (){
float hs,cc,ts;
printf("enter the hardness of steel=");
scanf("%f",&hs);

printf("enter the carbon content of steel=");
scanf("%f",&cc);

printf("enter the tensile strength of steel=");
scanf("%f",&ts);

if(hs>=50 && cc<=0.7 && ts>=5600){
    printf("grade of steel=10\n");
}

else if(hs>=50 && cc<=0.7 && ts<5600){
    printf("grade of steel=9\n");
}

else if(hs<50 && cc<=0.7 && ts>=5600){
    printf("grade of steel=8\n");
}

else if(hs>=50 && cc>0.7 && ts>=5600){
    printf("grade of steel=7\n");
}

else if((hs<50 && cc>0.7 && ts>=5600) || (hs<50 && cc<=0.7 && ts<5600) || (hs>=50 && cc<=0.7 && ts>=5600)){
    printf("grade of steel=6\n");
}

else if(hs<50 && cc>0.7 && ts<5600){
    printf("grade of steel=5\n");
}

return 0;
}