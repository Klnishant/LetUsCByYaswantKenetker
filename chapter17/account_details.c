#include<stdio.h>
#include<string.h>

struct customer {
    long ac_no;
    char name[40];
    int balance;
};

struct customer c[200];
void find_bellow_100();
void dr_cr(int code);

int main()
{
    for (int i = 0; i < 200; i++)
    {
        fflush(stdin);
        printf("Enter the account number of the %d customer:",(i+1));
        scanf("%d",&c[i].ac_no);
        fflush(stdin);

        printf("Enter the name of the %d customer:",(i+1));
        scanf("%s",c[i].name);
        fflush(stdin);

        printf("Enter the balance of the %d customer:",(i+1));
        scanf("%d",c[i].balance);

        printf("****************************************************************");

    }

    for (int i = 0; i < 200; i++)
    {
        printf("Name of the %d customer:");
        puts(c[i].name);
        printf("\n");
        printf("Account number of the %d customer:%d\n",(i+1),c[i].ac_no);
        printf("Account balance of the %d customer:%d\n",(i+1),c[i].balance);
        printf("*********************************************************************");
    }
    int code;

    printf("If you want you withdraw press 0 and enter\n");
    printf("if you want to deposit press 1 and enter\n");
    scanf("%d",&code);

 return 0;
}

void find_below_100()
{
    for (int i = 0; i < 200; i++)
    {
        if (c[i].balance<100)
        {
            printf("Name of the %d customer:");
            puts(c[i].name);
            printf("\n");
            printf("Account number of the %d customer:%d\n",(i+1),c[i].ac_no);
            printf("Account balance of the %d customer:%d\n",(i+1),c[i].balance);
            printf("*********************************************************************");
        }
        
    }
    
}

void dr_cr(int code)
{
    int ac,amount;

    printf("Fill the form");

    printf("Enter the account number:");
    scanf("%d",&ac);
    printf("Enter the amount:");
    scanf("%d",&amount);

    for (int i = 0; i < 200; i++)
    {
        if (ac==c[i].ac_no)
        {
            if (code==0)
            {
                c[i].balance=(c[i].balance)-amount;
                
                if (c[i].balance<100)
                {
                    printf("The balance is insufficient for the specified withdrawal\n");
                }
                else
                {
                    printf("You have been succesfully withdraw of Rs %d\n",amount);
                    printf("Your account balance:%d\n",c[i].balance);
                }   
            }
            
            if (code==1)
            {
                c[i].balance=(c[i].balance)+amount;
                printf("You have been succesfully deposit of Rs %d\n",amount);
                printf("Your account balance:%d\n",c[i].balance);
            }
            
        }
        
    }
    
    
}