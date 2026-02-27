#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void adhikari();
void adhikarii();
FILE *sashik;
void main()
{
	printf("Welcome to the accountant section  of IT Specialist.\nHere you can find all transaction details related to the budget and expenses\n");
	sashik=fopen("sashik.txt","rw+");

	adhikari();
	adhikarii();
	fclose(sashik);
	getch();
}


void adhikarii()
{
char adk[10];
	fprintf(sashik,"\nThe mentioned details are the price of each machinary for space craft whice are curently available:\t");
	fprintf(sashik,"SN\t\t Name of machinary\t\t price\n");
	fprintf(sashik,"1\t\tengine robot \t\t 1000000\nSN\t\t mars explorer rover\t\t 1500000\n3\t\t space probe\t\t 1100000\n 4\t\t trikidie\t\t 1600000\n5\t\t AREOCUBE 8A\t\t 1400000\n 6\t\t AEROCUBE 8B\t\t 1800000\n 7\t\t  aero chips\t\t 900000\n 8\t\t BIT control \t\t 1300000\n");
 	fprintf(sashik,"\n What do you want to buy\n");

}

void adhikari()
{
int adk1=4000000,sashik1;
printf("\n\nthe buget right now is %d\n\n",adk1);
printf("the avialble things are engine robot\tmars explore rover\tspace probe\ttrikidie\taerocube 8a and8b\tareochips\tbit control\n\n");
printf("\n 1. robot engine\t\t 2.mars explore rover\t\t 3.space probe\t\t 4.trikidie\t\t5.aerocube 8a\t\t6.aerocube 8b\t\t 7.aerochips\t\t 8.bit control\n\n");
printf("\nenter any one option  do you want to buy\n\n");
sashikk:
scanf("%d",&sashik1);
switch(sashik1)
{
	case 1:printf("ROBOT ENGINE");
	       printf("the remaining budget is %d",(adk1-1000000));
	       system("robot.xlsx");
	break;
	case 2:printf("MARS EXPLORE SYSTEM");
	       printf("the remaining budget is %d",(adk1-1500000));
	break;       
	case 3:printf("SPACE PROBE");
	      printf("the remaining budget is %d",(adk1-1100000));
	break;
	case 4:printf("TRIKIDIE");
		   printf("the remaining budget is %d",(adk1-1600000));
	break;
	case 5:printf("AEROCUBE 8A");
		   printf("the remaining budget is %d",(adk1-1400000));
	break;
	case 6:printf("AEROcUBE 8B");
		  printf("the remaining budget is %d",(adk1-1800000));
	break;
	case 7:printf("AERO CHIPS");
		   printf("the remaining budget is %d",(adk1-900000));
	break;
	case 8:printf("BIT CONTROL");
		    printf("the remaining budget is %d",(adk1-1300000));
	break;
	defult: printf("the machinary is not avilable curently");
	goto sashikk; 								
}
}
