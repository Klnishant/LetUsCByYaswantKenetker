#include<stdio.h>
#include<math.h>

float distance(int x1,int y1,int x2,int y2);
float area(float a,float b,float c);
int main()
{
    int x1,x2,x3,y1,y2,y3,x4,y4;
    float d1,d2,d3,d4,d5,d6,ar,pr1,pr2,pr3;

    printf("Enter the point1:");
    scanf("%d %d",&x1,&y1);
printf("Enter the point2:");
    scanf("%d %d",&x2,&y2);
printf("Enter the point3:");
    scanf("%d %d",&x3,&y3);

    d1=distance(x1,y1,x2,y2);
    d2=distance(x2,y2,x3,y3);
    d3=distance(x3,y3,x1,y1);

    printf("Distance between point1 and point2=%f\n",d1);
     printf("Distance between point2 and point3=%f\n",d2);
     printf("Distance between point3 and point1=%f\n",d3);

    ar=area(d1,d2,d3);

    printf("area of the triangle formed by this point=%f\n",ar);
    
    printf("Enter a point to find wheather it's inside the triangle or not\n");
    printf("Enter the coordinates of point:");
    scanf("%d %d",&x4,&y4);

    d4= distance(x4,y4,x1,y1);
    d5= distance(x4,y4,x2,y2);
    d6= distance(x4,y4,x3,y3);

    pr1=area(d1,d4,d5);
    pr2=area(d2,d5,d6);
    pr3=area(d3,d6,d4);

    if (pr1+pr2+pr3==ar)
    {
        printf("points inside the triangle\n");

    }
    else
    {
         printf("points outside the triangle\n");

    }
    
   
 return 0;
}

float distance(int x1,int y1,int x2,int y2)
{
    float ds;
    float m;
    m=(pow((x2-x1),2)+pow((y2-y1),2));
    ds=sqrt(m);

    return(ds);
}

float area(float a,float b,float c)
{
    float s,r,fr;

    s=(a+b+c)/2;
    r=s*(s-a)*(s-b)*(s-c);
    fr=sqrt(r);

    return(fr);
}