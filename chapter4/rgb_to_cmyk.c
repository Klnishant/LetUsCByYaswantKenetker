#include<stdio.h>
int main (){
float r,g,b,max,c,m,y,k,w;

printf("emter the value of rgb=");
scanf("%f %f %f",&r,&g,&b);

if (r==0 && g==0 && b==0)
{
    c=m=y=0;
    k=1;
}
 
else
{
   r=r/255;
   g=g/255;
   b=b/255;
   max=r;

   if (g>max)
   {
       max=g;
   }
   if (b>max)
   {
       max=b;
   }

   w=max;

   c=(w-r)/w;
   m=(w-g)/w;
   y=(w-b)/w;
   k=1-w;
}
 printf("cmyk=%f %f %f %f\n",c,m,y,k);
 
return 0;
}