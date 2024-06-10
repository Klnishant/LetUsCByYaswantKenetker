#include<stdio.h>
int main()
{
int num;

printf("How long you want to an array:");
scanf("%d",&num);

int arr[num],rev[num];

for (int i = 0; i < num; i++)
{
    printf("Enter the value of the %d element:",(i+1));
    scanf("%d",&arr[i]);
}

printf("Reverse of these elements are shown below\n");

while (num>=1)
{
    int i=0;

    rev[i]=arr[(num-1)];

    printf("%d\n",rev[i]);

    i++;
    num--;
}

 return 0;
}