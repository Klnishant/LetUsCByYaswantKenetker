#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    printf("How much name do you want to entererd:");
    scanf("%d",&n);

    char str[n][100];
    char t[100];

    printf("Enter the name:\n");
    

    for (int i = 0; i < n; i++)
    {

        printf("%d ",(i+1));   
        scanf("%s",str[i]);

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((strcmp(str[i],str[j]))>0)
            {
                strcpy(t,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],t);

            }
            
        }
        
    }

    printf("Names in alphabetical order:");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n",(i+1),str[i]);
    }
    

 return 0;
}