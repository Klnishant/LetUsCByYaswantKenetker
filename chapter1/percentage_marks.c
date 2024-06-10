#include<stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;
    printf("marks obtain from subject1=");
    scanf("%d",&s1);
printf("marks obtain from subject2=");
scanf("%d",&s2);

printf("marks obtain from subject s3=");
scanf("%d",&s3);

printf("marks obtain from subject4=");
scanf("%d",&s4);

printf("marks obtain from subject5=");
scanf("%d",&s5);

printf("aggrete marks=%d\n",s1+s2+s3+s4+s5);
printf("percentage marks=%d\n",(s1+s2+s3+s4+s5)*100/500);

return 0;
}