#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0;
	char ch;
	char pwd[30];
	printf("Enter password:");
	while((ch=_getch())!=13)
	{
		pwd[i]=ch;
		i++;
		printf("*");
	}
	pwd[i]='\0';
	printf("\nYour password = %s",pwd);
	getch();
	
}
