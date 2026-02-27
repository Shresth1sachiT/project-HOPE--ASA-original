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
	#define C 299792458
	#define G 0.00000000006672
#define pi 3.14
#define h 0.0000000000000000000000000000000006626
#define k 1000000000000000000000
	


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
		float r;
		printf("Mass of Black Hole in Long ton(lt):\t");
		scanf("%f",&sachit13);
		printf("Radius(r)=2GM/c^2");
		
		 r=((2*G*sachit13)/(C*C));
		
		
		printf("\n\n--------->>>>>>>>>>The radius of Black Hole should be around %f Light Years",r);
	}
	else if(sachit12==2)
	{
		float T,M;
		printf("Enter mass of black hole\n");
		scanf("%f",M);
		printf("\nloading....");
		sleep(3);
		printf("\nT=(hc^3)/(8PiKGM)");
		T=((h*(C*C*C))/(8*pi*k*G*M));
		printf("\n\n--------->>>>>>>>>>Temperature of a Black Hole is %f",T);
	}
	else if(sachit12==3)
	{
		float S,A;
		printf("Enter the value of A: ");
		scanf("%s",A);
		printf("\nverifing....");
		printf("\nS=(Pi A C^3 k)/(2 G h)");
		S=((pi* A* (C*C*C)*k)/(2 *G *h));
		printf("\n\n--------->>>>>>>>>>The Entropy of a Black HOLE %f",S);
	}
	else
	{
	printf("sorry! Out of our Service");
	}
}

void mathematicssolarsystem()
{
	printf("\norbital equations solve here!!\n");
	printf("\n\t\t\t**            **\t");
	printf("\n\t\t\t***           **\t            *           ");
	printf("\n\t\t\t** *         *\t           *          ");
	printf("\n\t\t\t**  *        *\t          * *         ");
    printf("\n\t\t\t**   *       *\t         *   *        ");
	printf("\n\t\t\t**    *      *\t        *     *       ");
	printf("\n\t\t\t**     *     *\t       *       *      ");
	printf("\n\t\t\t**      *    *\t      *         *     ");
	printf("\n\t\t\t**       *   *\t     *************    ");
	printf("\n\t\t\t**        *  *\t    ***************   ");
	printf("\n\t\t\t**         * *\t   *               *  ");
	printf("\n\t\t\t**          **\t  *                 * ");
	printf("\n\t\t\t**           *\t *                   *");
	
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
