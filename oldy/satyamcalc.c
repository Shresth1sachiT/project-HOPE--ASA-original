#include<stdio.h>
#include<conio.h>
void main()
{
	 long int satyam100,satyam101,satyam102,satyam103;
	printf("For calculating the force of attraction between heavenly bodies,\nEnter the masses of two heavenly bodies(in kilogram)");
	scanf("%ld%ld",&satyam100,&satyam101);
	printf("Then,\nEnter the distance between them(in meter)");
	scanf("%ld",&satyam102);
	satyam103=((0.0000000000667)*satyam100*satyam101)/(satyam103*satyam103);
	printf("The force of attraction between two heavenly bodies is %ld",satyam103);
	getch();
}
