#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char confirm[2]; char y[2]={"y"};
    int v,ch;
    //FILE *shiva;
    //char form[14]={" Variables "};
    //char standard[1000]={"r =	separation distance between the two bodies (m) \n l=	angular momentum of the orbiting body about the central body (kg*m2/s) \n m = orbiting body mass (kg) \n v=	for gravitation,it is the standard gravitational parameter (m3/s2) \n e =	eccentricity of the orbit (dimensionless) \n u =	angle that separation distance makes with the axis of periapsis (also called the true anomaly) (deg)"};
    printf("Do you  want to  learn 'How orbital position works as a function of time'?");
    printf("\nEnter -->>yes(y) to further execute or Enter -->> No(n)");
    scanf("%s",confirm);
    v= strcmp(confirm,y);
    if (v==0)
    {
    
        printf("\n Description\n");
        sleep(2);
        printf("In astrodynamics an orbit equation defines the path of orbiting body around central body relative to , without specifying position as a function of time. Under standard assumptions, a body moving under the influence of  forcae, directed to a central body, with a magnitude inversely proportional to the square of the distance (such as gravity), has an orbit that is a conic section (i.e. circular orbit, elliptic orbit, parabolic trajectory, hyperbolic trajectory, or radial trajectory) with the central body located at one of the two foci, or the focus (Kepler’s first law). Consider a two-body system consisting of a central body of mass M and a much smaller, orbiting body of mass m, and suppose the two bodies interact via a central, inverse-square law force (such as gravitation). In polar coordinates, the orbit equation can be written as shown");
      printf("\n\n");
      printf("loading........\n\n");
      sleep(5);
      printf("CATAGORIES");
      printf("\n1.Aerospace Engineering");
      printf("\n2.Astrodynamics");
      printf("\\n\n Enter 1 or 2 to learn about it more detaily  ");
      scanf("%d",&ch);
      switch (ch)
      {
      	case 1:
      		printf("What do Aerospace do?\n");
      		printf("Aerospace engineering is the primary field of engineering concerned with the development of aircraft and spacecraft. 'Aeronautical engineering' was the original term for the field. As flight technology advanced to include vehicles operating in outer space, the broader term 'aerospace engineering' has come into use.");
      		break;
      			case 2:
      				printf("What do astrodynamics do?\n");
      				printf("Astrodynamics is the study of the motion of artificial bodies moving under the influence of gravity from one or more large natural bodies. This includes maneuver planning of spacecraft in orbit, methodologies to determine where objects are in space, and spacecraft attitude determination and control.");
      				break;
      				default:
      					printf("WARNING !!!!1!! out of user command");
     
	  }
	
	  //system("black.png");
	  
	  printf(" \n\n\n Variables\n\n");
	  sleep(5);
	  printf(" r =	separation distance between the two bodies (m) \n l=	angular momentum of the orbiting body about the central body (kg*m2/s) \n m = orbiting body mass (kg) \n v=	for gravitation,it is the standard gravitational parameter (m3/s2) \n e =	eccentricity of the orbit (dimensionless) \n u =	angle that separation distance makes with the axis of periapsis (also called the true anomaly) (deg)");
	  printf("\n\n\n\n\n\n");
	  printf(" Kepler's Three Laws of Planetary Motion\n");
	  printf("-->>The Significance of Kepler's Laws\n");
	  printf("1.Kepler's First Law \n -->> Planets move around the Sun in ellipses, with the Sun at one focus"); 
	  // euta image halnu paarxa
	  printf("\n2.Kepler's 2nd law \n -->> The line connecting the Sun to a planet sweeps equal areas in equal times");
	  //euta image halnu parxa
	  printf("\n3.Kepler's 3rd Law \n -->>The square of the orbital period of a planet is proportional to the cube of the mean distance from the Sun (also stated as-- ...of the 'semi-major axis' of the orbital ellipse, half the sum of smallest and greatest distances from the Sun)");
     //fari eutaa image
     sleep(3);
     printf("\n \n \n \n \n \n \n \n");
     printf("\t\t\t\t\t\t\t\tshowing some pratical example for  kepler's third law\n");
     printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
     printf("!             Kepler's 3rd Law                        !\n");   
     printf("! T in years, a in astronomical units; then T2 = a3   !\n"); 
     printf("!     Discrepancies are from limited accuracy         !\n"); 
     printf("!-----------------------------------------------------!\n");
     printf("!| planet | |Period T| |Period T| |T2     | |a3     | !\n");
     printf("!| Mercury| |0.241   | |0.387   | |0.05808| |0.05796| !\n");
     printf("!| Venus  | |0.616   | |0.723   | |0.37946| |0.37793| !\n");
	 printf("!| Earth  | |1       | |1       | |1      | |1      | !\n");
	 printf("!| Mars   | |1.88    | |1.524   | |3.5344 | |3.5396 | !\n");
	 printf("!| Jupiter| |11.9    | |5.203   | |141.61 | |140.85 | !\n");
	 printf("!| Saturn | |29.5    | |9.539   | |870.25 | |867.98 | !\n");
	 printf("!| Uranus | |84.0    | |19.191  | |7056   | |7068   | !\n");
	 printf("!| Neptune| |165.0   | |30.071  | |27225  | |27192  | !\n");
	 printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	 
	 
     
     
    
     
	  
	  } 
    else
    {
    	printf("\nokay");
	}
    
    
    
    

}
