#include<stdio.h>
int main (){
int w;

printf("enter the weight of boxer in pound=");
scanf("%d",&w);

if (w<115)
{
    printf("boxer class is flyweight");
}

if (w<115)
{
    printf("boxer class is flyweight");
}

else if (w>=115 && w<=121)
{
    printf("boxer class is bantamweight");
}

else if (w>=122 && w<=153)
{
    printf("boxer class is featherweight");
}

if (w>153 && w<=189)
{
    printf("boxer class is middleweight");
}

if (w>=190)
{
    printf("boxer class is heavyweight");
}

return 0;
}