#include<stdio.h>
int main (){
int x,y,z;

printf("enter the three numbers=");
scanf("%d\t %d\t %d",&x,&y,&z);

if (x>y && y>z)
{
    printf("%d is greatest among three\n",x);
}

else if (z>y && y>x)
{
    printf("%d is greatest among three\n",z);
}

else if (y>x && x>z)
{
    printf("%d is greatest among three\n",y);
}

return 0;
}