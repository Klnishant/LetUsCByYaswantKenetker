#include<stdio.h>
#include<string.h>
int main()
{
    char strng[]={"Working with strings is fun"};
    int m,n;

    printf("Enter position M,N between 0 to 27:");
    scanf("%d %d",&m,&n);

    for (int i = m-1; i < m+n; i++)
    {
        printf("%c",strng[i]);
    }

    if (m==0)
    {
        printf("%s",strng);
    }
    
    
 return 0;
}