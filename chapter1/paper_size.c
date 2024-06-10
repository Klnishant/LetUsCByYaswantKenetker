#include<stdio.h>

int main()
{
    int l,b;
    l=1189;
    b=841;

    printf("size of paper A0=%dmm/%dmm\n",l,b);
    printf("size of paper A0=%dmm/%dmm\n",b,l/2);
    printf("size of paper A0=%dmm/%dmm\n",l/2,b/2);
    printf("size of paper A0=%dmm/%dmm\n",b/2,l/4);
    printf("size of paper A0=%dmm/%dmm\n",l/4,b/4);
    printf("size of paper A0=%dmm/%dmm\n",b/4,l/8);
    printf("size of paper A0=%dmm/%dmm\n",l/8,b/8);
    printf("size of paper A0=%dmm/%dmm\n",b/8,l/16);
    printf("size of paper A0=%dmm/%dmm\n",l/16,b/16);

    return 0;

}