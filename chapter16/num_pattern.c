#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

void gotoxy(short int col,short int row)
{
  HANDLE hstdout=GetStdHandle(STD_OUTPUT_HANDLE);
  COORD position={col,row};
  SetConsoleCursorPosition(hstdout,position);
}

void printpattern(int num);

int main()
{
    int num;

    printf("Enter the five digit number:");
    scanf("%d",&num);

    if (num>99999 || num<10000)
    {
        printf("Please enter the right number...!!");

        exit(0);
    }

    printpattern((num/10000));
    printpattern(((num/1000)%10));
    printpattern(((num/100)%10));
    printpattern(((num/10)%10));
    printpattern((num%10));
    
 return 0;
}

void printpattern(int num)
{
    int r,c;

    if (num==1)
    {
        gotoxy(10,6);
        printf("%c",'#');
        
        for (int r = 5; r < 12; r++)
        {
            gotoxy(11,r);
            printf("%c",'#');
        }

        gotoxy(10,r);
        printf("%c",'#');

        gotoxy(12,r);
        printf("%c",'#');
  
    }

    if (num==2)
    {
        for ( c = 14; c < 19; c++)
        {
            gotoxy(c,5);
            printf("%c",'#');
        }
        gotoxy(18,6);
        printf("%c",'#');

        gotoxy(18,7);
        printf("%c",'#');

        for ( c = 14; c < 19; c++)
        {
            gotoxy(c,8);
            printf("%c",'#');
        }

        gotoxy(14,9);
        printf("%c",'#');

        gotoxy(14,10);
        printf("%c",'#');
        
        gotoxy(14,11);
        printf("%c",'#');

        for ( c = 14; c < 19; c++)
        {
            gotoxy(c,12);
            printf("%c",'#');
        }
        
    }

    if (num==3)
    {
        for ( c = 21; c < 25; c++)
        {
            gotoxy(c,5);
            printf("%c",'#');
        }

        gotoxy(24,6);
        printf("%c",'#');

        gotoxy(24,7);
        printf("%c",'#');

        for ( c = 21; c < 25; c++)
        {
            gotoxy(c,8);
            printf("%c",'#');
        }

        gotoxy(24,9);
        printf("%c",'#');

        gotoxy(24,10);
        printf("%c",'#');

        gotoxy(24,11);
        printf("%c",'#');
        
        for ( c = 21; c < 25; c++)
        {
            gotoxy(c,12);
            printf("%c",'#');
        }
        
    }
    
    if (num==4)
    {
        for ( r = 5; r < 10; r++)
        {
            gotoxy(26,r);
            printf("%c",'#');
        }
        
        for ( r = 8; r < 12; r++)
        {
            gotoxy(28,r);
            printf("%c",'#');
        }

        gotoxy(27,9);
        printf("%c",'#');

        gotoxy(29,9);
        printf("%c",'#');

        gotoxy(30,9);
        printf("%c",'#');
        
    }
    
    if (num==5)
    {
        for ( c = 32; c < 37; c++)
        {
            gotoxy(c,5);
            printf("%c",'#');
        }

        for ( c = 32; c < 37; c++)
        {
            gotoxy(c,8);
            printf("%c",'#');
        }

        for ( c = 32; c < 37; c++)
        {
            gotoxy(c,12);
            printf("%c",'#');
        }

        gotoxy(32,6);
        printf("%c",'#');

        gotoxy(32,7);
        printf("%c",'#');
        
        gotoxy(36,9);
        printf("%c",'#');

        gotoxy(36,10);
        printf("%c",'#');

        gotoxy(36,11);
        printf("%c",'#');
        
    }

    if (num==6)
    {
        for ( r = 5; r < 12; r++)
        {
            gotoxy(38,r);
            printf("%c",'#');
        }

        for ( c = 39; c < 43; c++)
        {
            gotoxy(c,5);
            printf("%c",'#');
        }
        
        for ( c = 39; c < 43; c++)
        {
              gotoxy(c,9);
            printf("%c",'#');         
        }

        for ( c = 39; c < 43; c++)
        {
            gotoxy(c,12);
            printf("%c",'#');
        }

        gotoxy(42,10);
        printf("%c",'#');

        gotoxy(42,11);
        printf("%c",'#');
          
    }
    
    if (num==7)
    {
        for ( c = 44; c < 49; c++)
        {
            gotoxy(c,5);
            printf("%c",'#');
        }

        for ( r = 6; r < 12; r++)
        {
            gotoxy(48,r);
            printf("%c",'#');
        }
        
    }
    
    if (num==8)
    {
        for ( c = 50; c < 55; c++)
        {
            gotoxy(c,5);
            printf("%c",'#');
        }

        for ( c = 50; c < 55; c++)
        {
            gotoxy(c,8);
            printf("%c",'#');
        }

        for ( c = 50; c < 55; c++)
        {
            gotoxy(c,12);
            printf("%c",'#');
        }
        
        for ( r = 5; r < 12; r++)
        {
            gotoxy(50,r);
            printf("%c",'#');
        }

        for ( r = 5; r < 12; r++)
        {
            gotoxy(54,r);
            printf("%c",'#');
        }
    }
    
    if (num==9)
    {
        
    }
    
}