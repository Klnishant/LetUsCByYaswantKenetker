#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[40],dep[20],course[15];
    int year;
};

struct student s[450];

void student_data();
void display();
void name_acc_yoj(int year);//name acc to year of joining
void data_acc_roll(int roll);

int main()
{
    int r,y;

    printf("Enter the data of each student\n\n");
    student_data();

    display();

    printf("year of joining of the student:");
    scanf("%d",&y);

    name_acc_yoj(y);

    printf("enter the roll number of the student:");
    scanf("%d",&r);

    data_acc_roll(r);

 return 0;
}

void student_data()
{
     for (int i = 0; i < 450; i++)
    {
        fflush(stdin);
        printf("Enter the roll no of %d student:",(i+1));
        scanf("%d",&s[i].roll);
        fflush(stdin);

        printf("\nEnter the name of %d student:",(i+1));
        scanf("%s",&s[i].name);
        fflush(stdin);

        printf("\nEnter the department of %d student:",(i+1));
        scanf("%s",&s[i].dep);
        fflush(stdin);

        printf("\nEnter the course of %d student:",(i+1));
        scanf("%s",&s[i].course);
        fflush(stdin);

        printf("\nEnter the year of %d student:",(i+1));
        scanf("%d",&s[i].year);
        fflush(stdin);

        printf("\n\n******************************************\n\n");
        
    }
}

void display()
{
    for (int i = 0; i < 450; i++)
    {
        printf("Roll no of %d student:%d\n",(i+1),s[i].roll);
        printf("Name of %d student:",(i+1));
        puts(s[i].name);
        printf("\n");
        printf("Department of %d student:",(i+1));
        puts(s[i].dep);
        printf("\n");
        printf("course of %d student:",(i+1));
        puts(s[i].course);
        printf("\n");
        printf("Year of joining of %d student:%d\n",(i+1),s[i].year);
    }
    
}

void name_acc_yoj(int year)
{
    int j=0;

    for (int i = 0; i < 450; i++)
    {
        if (year==s[i].year)
        {
            puts(s[i].name);
            printf("joined in the %d year\n",s[i].year);

            j=1;
        }
        
    }

    if (j=0)
    {
        printf("No any student is joining in %d year",year);
    }
       
}

void data_acc_roll(int roll)
{
    int i,j=0;

    for ( i = 0; i < 450; i++)
    {
        if (roll==s[i].roll)
        {
        printf("Roll no of %d student:%d\n",(i+1),s[i].roll);
        printf("Name of %d student:",(i+1));
        puts(s[i].name);
        printf("\n");
        printf("Department of %d student:",(i+1));
        puts(s[i].dep);
        printf("\n");
        printf("course of %d student:",(i+1));
        puts(s[i].course);
        printf("\n");
        printf("Year of joining of %d student:%d\n",(i+1),s[i].year);

        }
        j=1;
    }

    if (j=0)
    {
        printf("No student is available for %d roll number\n",roll);
    }
    
    
}