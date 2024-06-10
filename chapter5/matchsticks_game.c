#include<stdio.h>
int main()
{
int m=21,p,c;

while(m>=1&&m<=21)
{
    printf("choose the number of matchstickes between 1 to 4=");
    scanf("%d",&p);

    if(p>4 || p<1)
    continue;

    m=m-p;

    printf("number of matchsticks left=%d\n",m);
c=5-p;
    printf("computer choose matchsticks=%d\n",c);

    m=m-c;

    printf("number of matchstickes left=%d\n",m);

    if (m==1)
    {
        printf("you lose the game!!\n");
        break;
    }
    

}
 return 0;
}