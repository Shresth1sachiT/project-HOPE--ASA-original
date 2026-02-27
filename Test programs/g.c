#include <stdio.h>
#include <math.h>

double local_g(double latitide, double height_sea_lvl);
double local_g(double latitide, double height_sea_lvl)
{
    const double A = 0.0053024;
    const double B = 0.0000058;

    double H2 = (0.000003 * height_sea_lvl);
    double s1 = (A * sin(latitide));

    double s2 = (B * sin(2 * latitide));
    return (double)(9.780327 * (1 + s1 - s2) - H2);
}

void main()
{
	int ple;
	system("cls");
	printf("\n\t\t1. Local acceleration\t\t\t2. Distance between two points\t\t\t");
	printf("\n");
	scanf("%d",&ple);
	if(ple==1)
	{
	system("cls");
    printf("Enter latitude1:\t");
    double latitude1 = 0, height = 0;
    if (scanf("%lf", &latitude1) != 1)
    {
        fprintf(stderr, "bad input\n");
        
    }
    printf("Enter height above sea level (in metres):\t");
    if (scanf("%lf", &height) != 1)
    {
        fprintf(stderr, "bad input\n");
       
    }
     printf("Your local g (accleration due to gravity): %0.10f\n", local_g(latitude1, height));
     
 }
 
 else if(ple==2)
{
	
	
	
}
   getch();
}

