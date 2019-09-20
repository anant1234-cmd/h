#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<snap.h>
int i;
char t[20];

void pd(void);
void ad();

void main()
{
 int key;
	   /* project for fee structure */
 clrscr();
 printf("********************************************************************\n");
 printf("********************************************************************\n");
 printf("********************************************************************\n");
 printf("____________________________________________________________________\n");
 printf("____________________________________________________________________\n");
 printf("\n");
 printf("      WELCOME TO R.K. INSTITUTE OF TECHNOLOGY AND MANAGEMENT    \n");
 printf("____________________________________________________________________\n");
 printf("____________________________________________________________________\n");
 printf("********************************************************************\n");
 printf("********************************************************************\n");
 printf("********************************************************************\n");
 printf("\n");
 printf("\t\t  welcome to our official page\n\n");
 printf("********************************************************************\n");
 printf("********************************************************************\n");
 printf("********************************************************************\n");
 printf("____________________________________________________________________\n");
 printf("If you want to require about the information of fee,\n");
 printf("please type yes");
 printf("\n##################################################################");
 printf("\n\t\tENTER YOUR CHOISE ===>\t");
 gets(t);
 i=strcmp("yes",t);
 if( i==0)
   {
    goto xyz;
   }
 else
   {
    exit(0);
   }
 xyz:
  while(1)
  {
   printf("press the number which is given in front of course");
   printf(" \n 1 => B.tech ");
   printf(" \n 2 => B.B.A ");
   printf(" \n 3 => B.C.A ");
   printf(" \n 4 => B.Sc.(maths) ");
   printf(" \n 5 => B.Sc.(biology) ");
   printf(" \n 6 => B.Sc.(chemistry) ");
   printf(" \n 7 => B.phrma ");
   printf(" \n 8 => B.arch.");
   printf(" \n 9 => B.sc.(cs)");
   printf(" \n 10 => B.ed.");
   printf(" \n 11 => M.tech.");
   printf(" \n 12 => M.B.A.");
   printf(" \n 13 => M.C.A.");
   printf(" \n 14 => M.sc.(maths)");
   printf(" \n 15 => M.Sc.(physics)");
   printf(" \n 16 => M.Sc.(chemistry)");
   printf(" \n 17 => M.Sc.(Biology)");
   printf(" \n 18 => M.phrma.");
   printf(" \n 19 => M.arch.");
   printf(" \n 20 => M.Sc.(cs)");
   printf(" \n 21 => M.ed.");
   printf(" \n 22 => M.Com.");
   printf(" \n 23 =>******** ~ EXIT ~ ********");
   printf("\nplease enter the code =>");
   scanf("%d",&key);
  switch(key)
   {
    case 1:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tB.tech.");
    printf("\n\n\tfee for 1st year is 1,20,000\n");
    printf("\n\n\tfee for 2nd, 3rd and 4rd year is 1,00,000");
    pd();
    break;
    case 2:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tB.B.A.");
    printf("\n\n\tfee for 1st year is 60,000");
    printf("\n\n\tfee for 2nd and 3rd year is 40,000");
    pd();
    break;
    case 3 :
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tB.C.A");
    printf("\n\n\tfee for 1st year is 60,000");
    printf("\n\n\tfee for 2nd and 3rd is 40,000");
    pd();
    break;
    case 4:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tB.Sc.(maths)");
    printf("\n\n\tfee for per year is 20,000");
    pd();
    break;
    case 5:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tB.Sc.(Biology)");
    printf("\n\n\tfee is 30,000 per year");
    pd();
    break;
    case 6:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tB.sc.(chemistry)");
    printf("\n\n\tfee is 25,000 per year");
    pd();
    break;
    case 7:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tB.phrma.");
    printf("\n\n\tfee is 34,000 per year");
    pd();
    break;
    case 8:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tB.arch.");
    printf("\n\n\tfee is 22,000 per year");
    pd();
    break;
    case 9:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tB.Sc.(cs)");
    printf("\n\n\tfee is 27,000 per year");
    pd();
    break;
    case 10 :
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tB.ed.");
    printf("\n\n\tfee is 48,000 per year");
    pd();
    break;
    case 11:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tM.tech");
    printf("\n\n\tfee is 67,000 per sem ");
    pd();
    break;
    case 12:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tM.B.A.");
    printf("\n\n\tfee is 68,000 per sem ");
    pd();
    break;
    case 13:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tM.C.A.");
    printf("\n\n\tfee is 72,000 per sem");
    pd();
    break;
    case 14:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tM.Sc.(maths)");
    printf("\n\n\tfee is 12,000 per sem");
    pd();
    break;
    case 15:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tM.Sc.(physics)");
    printf("\n\n\tfee is 16,000 per sem");
    pd();
    break;
    case 16:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tM.Sc(chemistry)");
    printf("\n\n\tfee is 16,000 per sem");
    pd();
    break;
    case 17:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tM.Sc.(biology)");
    printf("\n\n\tfee is 18,000 per sem ");
    pd();
    break;
    case 18:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tM.phrma");
    printf("\n\n\tfee is 87,000 per year ");
    pd();
    break;
    case 19:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tM.arch.");
    printf("\n\n\tfee is 42,000 per year");
    pd();
    break;
    case 20:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tM.Sc.(cs)");
    printf("\n\n\tfee is 34,000 per sem");
    pd();
    break;
    case 21:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tM.ed.");
    printf("\n\n\tfee is 45,000 per sem");
    pd();
    break;
    case 22:
    ad();
    printf("\n\n\n\n\n\n\n\n\t\tM.Com.");
    printf("\n\n\tfee is 23,000 per sem ");
    pd();
    break;
    case 23:
    exit(0);
    break;
    default:
    pd();
    printf("\n\n\tmatch is not Authenticated");
    pd();
   }
  getch();
 }
}
void pd(void)
{
 printf("\n\n\n\n\n\n");
 printf("\n________________________________________________________________________\n");
 printf("\n________________________________________________________________________\n");
 printf("\n________________________________________________________________________\n");
 printf("\n________________________________________________________________________\n");
 printf("\n\n\n\n\n\n\n\n");
}
void ad()
{
 int gdriver = DETECT,gmode;
 int x,y,i;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	for(i=30;i<200;i++)
	{
		delay(10);
		setcolor(i/10);
		arc(x,y,0,360,i-10);
	}
	capture("C:\\TC\\Capture\\Capture1.jpg");
getch();
}

	  /*END*/