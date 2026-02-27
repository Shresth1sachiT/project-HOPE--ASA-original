#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
void shresthasachit();
void mathematicssolarsystem();
void mathematicsblackhole();
void mathematicsplanetearth();
void mathematicsuniverse();
void mathematicsparabolicequations();

	int sachit10,sachit12;
	char sachit11[50];
	float sachit13;
	
	
void main()
{
	#define c 299792458
	#define G 0.00000000006672
#define pi 3.14
#define h 0.0000000000000000000000000000000006626
	


	printf("Calculations to perform:\n");
	printf("\t\t ________________________________________________________________________________________\n");
	printf("\t\t||\t\t\t\tAvailable Calculation Areas:\t\t\t\t|| \n");
	printf("\t\t||______________________________________________________________________________________||\n");
	printf("\t\t||                                                                                      ||\n");
	printf("\t\t|| 1.|\tRelated to Black Holes\t\t||2.|\t Related to Solar System\t\t||\n");
	printf("\t\t|| 3.|\tRelated to Planet Earth\t\t||4.|\t Related to Universe\t\t\t||\n");
	printf("\t\t|| 5.|\tRelated to Parabolic Equations\t||6.|\t Related to Einstein Field Equation\t||\n");
	printf("\t\t||______________________________________________________________________________________||\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	printf("\n");
	
	printf("Descision:\t");
	scanf("%d",&sachit10);
	printf("\n");
	switch(sachit10)
	{
		case 1:mathematicsblackhole();
		break;
		case 2:mathematicssolarsystem();
		break;
		case 3:mathematicsplanetearth();
		break;
		case 4:mathematicsuniverse();
		break;
		case 5:mathematicsparabolicequations();
		break;
		case 6:mathematicseinsteinfieldequation();
		break;
		default:printf("Invalid Decision");
		printf("\n To reroute please enter your password\t");
		scanf("%s",sachit11);
		if(strcmp(sachit11,"admin3")==0)
		printf("Hi");
		break;
	}
	
	getch();
}
void mathematicsblackhole()
{
	printf("Press\n");
	printf("1. Find Size\n2. Find Temperature\n3. Find Entropy\n");
	scanf("%d",&sachit12);
	if(sachit12==1)
	{
		printf("Mass of Black Hole in Long ton(lt):\t");
		scanf("%f",&sachit13);
		printf("Radius(r)=2GM/c^2");
		/*
		float r=(((2*G*sachit13*1016.053)/(c*c))/299792458);
		*/
		float r=1;
		printf("The radius of Black Hole should be around %f Light Years",r);
	}
	else if(sachit12==2)
	{
		printf("Enter mass of black hole\n");
		printf("T=(hc^3)/(8PiKGM)");
		printf("Solution aafai gar");
	}
	else if(sachit12==3)
	{
		printf("Enter the value of A: ");
		printf("S=(Pi A C^3 k)/(2 G h)");
		printf("solutions aafai garna sakdainas mula");
	}
	else
	{
	
	}
}

void mathematicssolarsystem()
{
	printf("\norbital equations solve here!!\n");
	printf("\n\t\t\t**            **\t");
	printf("\n\t\t\t***           **\t            *           ");
	printf("\n\t\t\t** **         **\t           ***          ");
	printf("\n\t\t\t**  **        **\t          ** **         ");
    printf("\n\t\t\t**   **       **\t         **   **        ");
	printf("\n\t\t\t**    **      **\t        **     **       ");
	printf("\n\t\t\t**     **     **\t       **       **      ");
	printf("\n\t\t\t**      **    **\t      **         **     ");
	printf("\n\t\t\t**       **   **\t     ***************    ");
	printf("\n\t\t\t**        **  **\t    *****************   ");
	printf("\n\t\t\t**         ** **\t   **               **  ");
	printf("\n\t\t\t**          ****\t  **                 ** ");
	printf("\n\t\t\t**           ***\t **                   **");
	
}

void mathematicsplanetearth()
{
	printf("namaste");
}

void mathematicseinsteinfieldequation()
{
	printf("Einstein was great");
}

void mathematicsparabolicequations()
{
	int a1,a2,a3,b1,b2,b3,c1,c2,c3;
	printf("Enter coefficients of path 1: a1 b1 c1 ");
	scanf("%d%d%d",&a1,&b1,&c1);
	printf("Enter coefficients of path 2: a2 b2 c2 ");
	scanf("%d%d%d",&a2,&b2,&c2);
	printf("Enter coefficients of path 2: a3 b3 c3 ");
	scanf("%d%d%d",&a3,&b3,&c3);
	if(a1!=0)
	{
		a2=a1*a2;
		b2=b2*a1;
		c2=a1*c2;
		
	}
	
	printf("parabola");
}

void mathematicsuniverse()
{
	printf("Universe is very big");
}

