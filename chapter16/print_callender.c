#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>

void gotoxy(short int col,short int row)
{
  HANDLE hstdout=GetStdHandle(STD_OUTPUT_HANDLE);
  COORD position={col,row};
  SetConsoleCursorPosition(hstdout,position);
}

int getkey()
{
  int ch;
  ch=getch();

  if (ch==224 || 0)
  {
    ch=getch();
    return ch;
  }

  return ch;
  
}

void cal(int year,int nmonth,int od,int d);

static char *month[]={"january","february","march","april","may","june","july",
"august","september","october","november","december"};
  char *days[]={"sun","mon","tue","wed","thur","fri","sat"};

int main()
{

    char emth[12];
    int year,odc,odp=0,odt,od,d;
    int mcode[]={3,0,3,2,3,2,3,3,2,3,2,3};
    static int dy[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int j=0;
    int nmonth,dp;
    int ch;

    printf("Enter the month:");
    scanf("%d",&nmonth);

    printf("Enter the year:");
    scanf("%d",&year);

    while(1)
    {
    odc=((year-1)-((year-1)%100))%400;

    switch (odc)
    {
    case 0:
      odc=0;
      break;

    case 100:
      odc=5;
      break;

    case 200:
      odc=3;
      break;

    case 300:
      odc=1;      
      break;
    }

    odc=odc+((year-1)%100)+(((year-1)%100)/4);

    if ((year%4)==0)
    {
      dy[1]=29;
    }
    else
    dy[1]=28;

    for (int i = 0; i < (nmonth-1); i++)
    {
      odp=odp+mcode[i];
    }
    odp=odp+1;

    odt=odc+odp;

    od=odt%7;

     d=dy[(nmonth-1)];

    cal(year,nmonth,od,d);
  
    ch=getkey();

    switch (ch)
    {
    case 77:
      if (nmonth==12)
      {
        year++;
        nmonth=1;
      }
      else
      nmonth++;
      break;
    
    case 72:
    year++;
    continue;

    case 75:
    if (nmonth==1)
    {
      year--;
      nmonth=12;
    }
    else
    nmonth--;
    break;

    case 80:
    year--;
    continue;

    case 1:
      exit(0);
    }

    }
  return 0;
}

void cal(int year,int nmonth,int od,int d)
{
  int i,r,c;
  char a;

  gotoxy(25,4);
  printf("%s %d",month[nmonth-1],year);

  gotoxy(10,5);
  printf("________________________________________");

  for ( i = 0; i < 7; i++)
  {
    gotoxy((10+(6*i)),6);
    printf("%s",days[i]);
  }

  gotoxy(10,7);
  printf("________________________________________");

  r=9;
  c=11+6*od;
  for ( i = 1; i <= d; i++)
  {
    gotoxy(c,r);
    printf("%d",i);

    if (c<=41)
    {
      c=c+6;
    }
    else
    {
      c=11;
      r=r+1;
    }  
  }
 gotoxy(10,15);
 printf("________________________________________"); 
  
}