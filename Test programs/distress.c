#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int sig,esig,dval;
void distress();
void main()
{
	time_t t=time(NULL);
	printf("\n Current date and time is: %s",ctime(&t));	
	distress();
	getch();
}
distress()
{
	system("cls");
	printf("FOR EMERGENCY UNIT PRESS 000");
	scanf("%d",&esig);
	if(esig==000)
	{
		system("cls");
	printf("\n\t\t1. SEND DISTRESS CALL \n\t\t2. SEND NOTIFICATION TO OTHER ADMINS.");
	scanf("%d",&sig);
	if(sig==1)
	{
	dval=1;	
	}
	else if(sig==2)
	{
	system("cls");
		
	}
}
}
