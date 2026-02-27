#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void scientist();/*This is for scientists to perform calculations*/

//scientist related//
void mathematicssolarsystem();
void mathematicsblackhole();
void mathematicsplanetearth();
void mathematicsuniverse();
void mathematicsparabolicequations();
double local_g(double latitide, double height_sea_lvl);
void orbitarea();
void distance();
void application();
//scientist related upto here//

/*definite values*/
	#define C 299792458
	#define G 0.00000000006672
	#define PI 3.141592
    #define k 1000000000000000000000
    int track=0;//scientist lai warn garna//
/*upto here*/
void backagain();/*to return to main menu*/
void admin();/* this is for boss*/
void guest();/* this is for guest account*/
void chiefeditor();/*this is for blogs,pdf,research papers.... prs*/
void itspecialist();/*this is to store all valuable data for research */
void logo(); /*Logo of ASA */
void logout();//log out garna lai//
void accountant();//This one's for accountant//
void na();/* not available ko laagi*/

void main()
{
	printf("\n\n\n\n\n");
	char gide[10000];
FILE *guide;
	printf("Guidlines :\n");
	guide=fopen("1 Guidlines.txt","r");
	while((fscanf(guide,"%s",gide))!=EOF)
	{
		printf("\t%s\n\n",gide);
	}
	printf("\n");
	system("COLOR 74");
	printf("************************************************************************************************************************");
	printf("                                                  LOADING . . .");
	sleep(3);
	system("COLOR 79");
	printf(" . .");
	sleep(2);
	system("COLOR 7A");
	printf(" . . .");
	printf("\n");
	printf("************************************************************************************************************************");
	getch();
	system("cls");
	
	backagain();
	
	}
	
	
	void backagain()
	{
		
		
		
		
		system("cls");
int i1=0,i2=0;
	char ch1,ch2;
	char pwd[30],id[30];
	char ID[30],name[30],pass[30],position[50];
//initializing login design on//
	
logo();
printf("\n");
time_t t=time(NULL);
printf("                                                                                            %s",ctime(&t));
printf("\n\n\n\n\n\n");
printf("________________________________________________________________________________________________________________________\n");
printf("\t\t\t\t\t\t");
printf("ID:\t  | ");
while((ch2=_getch())!=13)
	{
		id[i2]=ch2;
		i2++;
		printf("*");
	}
	id[i2]='\0';
printf("\n________________________________________________________________________________________________________________________\n");
printf("\t\t\t\t\t\t");
printf("Password: | ");
while((ch1=_getch())!=13)
	{
		pwd[i1]=ch1;
		i1++;
		printf("*");
	}
	pwd[i1]='\0';
printf("\n________________________________________________________________________________________________________________________\n");

//login design over//
int mismatch=1;
	FILE *fp;
	fp=fopen("admin.txt","r");
while((fscanf(fp,"%s\t%s\t%s\t%s",name,ID,pass,position))!=EOF)
{
if(strcmp(id,ID)==0)
{
	if(strcmp(pwd,pass)==0)
	{
		system("COLOR 02");//black background and green text//
		printf("\n\t\t\t\t\t\tPASSWORD & ID VERIFIED \n\t\t\t\t\t    PRESS ANY KEY TO CONTINUE [^.^]");
getch();
	system("COLOR 07");//black background and white text//

		
		if(strcmp(name,"Guest")==0)
		//yaha bata arko engine rakhne//
		
		{
			//sachit's code//
		guest();
		//sachit's code//
	}
	else if(strcmp(name,"Pratik_Ghimire")==0)
	{
		//pratik's code//
		chiefeditor();
		//pratik's code//
	}
	else if(strcmp(name,"Satyam_Thapa")==0)
	{
		//satyam's code//
		itspecialist();
		//satyam's code//
	}
	else if(strcmp(name,"Shiva_Matalangu")==0)
	{
		//shiva's code//
		admin();
		//shiva's code//
	}
	else if(strcmp(name,"Sashik_Adhikari")==0)
	{
		//shashik's code//
		accountant();
		//shashik's code//
	}
	else if(strcmp(name,"Sachit_Shrestha")==0)
	{
		//s's code//
		system("cls");
		printf("\a");
		scientist();
		//st's code//
	}
//vitra ko engine sidhyo//
	}
	else
	{
		printf("\a");
	}
}
else
{
	
printf("\a");
}
	system("COLOR 04");//black background and red text//
		printf("\n\t\t\t\t\t\tPASSWORD & ID VERIFIED \n\t\t\t\t\t      TYPE MISMATCH(ed) [:_^_:]\n");

}
	fclose(fp);
getch();
		
		
		
	}
	
		void guest()
	{
		
		system("cls");
		
		printf("Welcome Mr. Guest");
			printf("\n");
			char ch[5],sachit1[5];
printf("Do you want to know about ASA? (yes/no)");
char sachit3[5];
scanf("%s",sachit3);
if(strcmp(sachit3,"YES")==0||strcmp(sachit3,"yes")==0)
{
	system("ASA.html");
	logout();
}

else
{
	printf("Do you wanna learn something new about space, yah?(yes/no):");
	scanf("%s",ch);
	if(strcmp(ch,"yes")==0||strcmp(ch,"YES")==0)
	{
	int sachit2;
	printf("What do you want to know about?");
	again:
	printf("\n \t\t1. Alien \t\t\t 2. Asteroids \t\t\t 3. Black Hole \n \t\t4. Civilization \t\t 5.Constellation \t\t 6. Galaxy \n \t\t7. Mars \t\t\t 8. Moon \t\t\t 9. Multiverse \n \t\t10. Satellite \t\t\t 11. Solar System \t\t 12. Star \n \t\t13. Sun \t\t\t 14. Universe \t\t\t 15. White Hole");
	printf("\n________________________________________________________________________________________________________________");
	printf("\n");
	printf("Option (From 1 to 15):\t");
	scanf("%d",&sachit2);
	switch(sachit2)
	{
		case 1: system("alien.png");
		logout();
		break;
		case 2: system("asteroid.png");
		logout();
		break;
		case 3: system("blackhole.png");
		logout();
		break;
		case 4: system("civilization.png");
		logout();
		break;
		case 5: system("constellation.png");
		logout();
		break;
		case 6: system("galaxy.png");
		logout();
		break;
		case 7: system("mars.png");
		logout();
		break;
		case 8: system("moon.png");
		logout();
		break;
		case 9: system("multiverse.png");
		logout();
		break;
		case 10: system("satellite.png");
		logout();
		break;
		case 11: system("solarsystem.png");
		logout();
		break;
		case 12: system("star.png");
		logout();
		break;
		case 13: system("sun.png");
		logout();
		break;
		case 14: system("universe.png");
		logout();
		break;
		case 15: system("whitehole.png");
		logout();
		break;
		default: printf("Oops! Sorry that option is invalid (>'_^_'<) ");
		printf("\nPlease choose correct one");
		goto again;
	}
	}
}
}
	
	void chiefeditor()
	{
		system("cls");
		
		printf("\n Welcome, Sir ");
		FILE*websites;
		int pratik1;
printf("\n Please choose any one of the provided option");
printf("\n");
pratik3:
printf("\t 1.Public Documents \t\t 2.Research Papers \n \t 3.Missions \t\t\t 4.vlogs \n \t 5. Websites \t\t\t 6. Other Organizations \n \t 7. Visions");
printf("\n");
printf("_____________________________________________________________________");
printf("\n");
printf("Option: \t");
scanf("%d",&pratik1);
char pratik2[1000];
switch(pratik1)
{
	case 1:system("publicdocument.pdf");
	logout();
	break;
	case 2:system("researchpaper.pdf");
	system("researchpaper2.pdf");
	system("researchpaper3.pdf");
	logout();
	break;
	case 3:system("3.png");
	logout();
	break;
	case 4:system("2.png");
	system("4.png");
	logout();
	break;
	case 5:websites=fopen("websites.txt","r");
	while((fscanf(websites,"%s",pratik2))!=EOF)
	{
		printf("%s",pratik2);
		printf("\n");
		getch();
	}
	logout();
	break;
	case 6:system("otherorganization.txt");
	logout();
	break;
	case 7:system("vision.pdf");
	logout();
	break;
	default:printf("You may have entered invalid option sir!\n");
	printf("Please proceed again");
	goto pratik3;
	}
}

void itspecialist()
{
	system("cls");
	
	char satyam1[20],satyam2[35],satyam3[8],satyam5[10];long int satyam4;
FILE *satyam;

//it ko data server ko laagi codes suru//

printf("Welcome Sir \n");
printf("Search for information about....(solar family only): \t");
	scanf("%s",satyam1);
	
	/*NOTE: This code will only work for displaying data about sun and earth and not the rest but rest of other planets and satellite's data will also be available in the respective file through this file*/
	if(strcmp(satyam1,"sun")==0||strcmp(satyam1,"SUN")==0)
	{printf("What information do you want\nradius \tmass \tdistance from earth\t density\t gravity\n");
		scanf("%s",satyam2);
		if(strcmp(satyam2,"radius")==0||strcmp(satyam2,"r")==0||strcmp(satyam2,"R")==0||strcmp(satyam2,"RADIUS")==0)
		{printf("696000 km");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0||strcmp(satyam3,"YES")==0)
			{printf("In order to change the data you need PASSWORD.So,Enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin4")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
				printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        %d\n",satyam4);
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t	1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n");
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n");
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n");
		fclose(satyam);	}
			else
			{
				printf("\a");
				printf("WRONG PASSWORD!!");
			}
			}
			else if(strcmp(satyam3,"no")==0)
			{
			printf("\nokay");
		}
		}
		else if(strcmp(satyam2,"mass")==0||strcmp(satyam2,"m")==0||strcmp(satyam2,"MASS")==0||strcmp(satyam2,"M")==0)
		{printf("1.9891 x 10^30 kg");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0||strcmp(satyam3,"YES")==0)
			{printf("In order to change the data you need PASSWORD.So,enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin4")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
			printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n");
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t	%ld\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n",satyam4);
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n");
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n");
		fclose(satyam);	}
			else
			{
			printf("\a");
			printf("WRONG PASSWORD!!");
		}
			}
			else if(strcmp(satyam3,"no")==0)
			{printf("\nokay");
		}
		}
		else if(strcmp(satyam2,"distancefromearth")==0||strcmp(satyam2,"d")==0||strcmp(satyam2,"DISTANCEFROMEARTH")==0||strcmp(satyam2,"D")==0)
		{
			printf("1.471 - 1.521 x 10^8 km");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0||strcmp(satyam3,"YES")==0)
			{
				printf("In order to change the data you need PASSWORD.So,enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin4")==0)
			{
			printf("Enter the correct data:");
			scanf("%ld",&satyam4);
			printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n");
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t		1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n");
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	%ld\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n",satyam4);
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n");
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n");
		fclose(satyam);	}
			else
			{
			printf("\a");
			printf("WRONG PASSWORD!!");
			}
			}
			else if(strcmp(satyam3,"no")==0)
			{printf("\nokay");
		}}
			else if(strcmp(satyam2,"density")==0||strcmp(satyam2,"d")==0||strcmp(satyam2,"D")==0||strcmp(satyam2,"DENSITY")==0)
		{printf("1408 kg per cubic meter");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0||strcmp(satyam3,"YES")==0)
			{printf("In order to change the data you need PASSWORD.So,enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin4")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
			printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n");
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t		1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n");
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	%ld\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n",satyam4);
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n");
		fclose(satyam);	}
			else
			{
			printf("\a");
			printf("WRONG PASSWORD!!");
			}
			}
			else if(strcmp(satyam3,"no")==0)
			{
			printf("\nokay");
		}}
				else if(strcmp(satyam2,"gravity")==0||strcmp(satyam2,"g")==0||strcmp(satyam2,"GRAVITY")==0||strcmp(satyam2,"G")==0)
		{printf("274 meter pr.square second");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0||strcmp(satyam3,"YES")==0)
			{printf("In order to change the data you need PASSWORD.So,enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin4")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
			printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n");
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t		1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n");
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n");
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	%ld\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n",satyam4);
		fclose(satyam);	}
			else
			{
			printf("\a");
			printf("WRONG PASSWORD!!");
		}
			}
			else if(strcmp(satyam3,"no")==0)
			{
			printf("\nokay");
		}}}
		if(strcmp(satyam1,"earth")==0)
	{printf("What information you want?\n radius\t mass\t distance from earth\t density\t gravity\n");
		scanf("%s",satyam2);
		if(strcmp(satyam2,"radius")==0)
		{printf("6378.1 km");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0)
			{printf("In order to change the data you need PASSWORD.So,Enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin4")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
				printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	%ld\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n",satyam4);
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t	1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n");
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n");
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n");
		fclose(satyam);	}
			else
			printf("WRONG PASSWORD!!");
			}
			else if(strcmp(satyam3,"no")==0)
			{
			printf("\nokay");
		}
		}
		else if(strcmp(satyam2,"mass")==0)
		{printf("5.9736 x 10^24 kg");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0)
			{printf("In order to change the data you need PASSWORD.So,enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin4")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
			printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n");
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t	1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	%ld\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n",satyam4);
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n");
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n");
		fclose(satyam);	}
			else
			printf("WRONG PASSWORD!!");
			}
			else if(strcmp(satyam3,"no")==0)
			{
			printf("\nokay");
		}
		}
		else if(strcmp(satyam2,"distancefromearth")==0)
		{
			printf("not available");}
			else if(strcmp(satyam2,"density")==0)
		{printf("5515 kg per cubic meter");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0)
			{printf("In order to change the data you need PASSWORD. So,enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin4")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
			printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n");
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t		1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n");
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	%ld\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n",satyam4);
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n");
		fclose(satyam);	}
			else
			printf("WRONG PASSWORD!!");
			}
			else if(strcmp(satyam3,"no")==0)
			{
			printf("\nokay");
		}
		}
				else if(strcmp(satyam2,"gravity")==0){
			printf("9.798 meter pr.square second");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0)
			{printf("In order to change the data you need PASSWORD.So,enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin4")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
			printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n");
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t		1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n");
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n");
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	%ld\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n",satyam4);
		fclose(satyam);	}
			else
			{
			printf("\a");
			printf("WRONG PASSWORD!!");
		}
			}
			else if(strcmp(satyam3,"no")==0)
			{
			printf("\nokay");
		}
		}
		}
		logout();
// it data server ko laagi codes finish//
}

/* Garo xa logo banaunani haha!*/
void logo()
{
	
system("COLOR 07");	
printf("\n");
printf("\t\t\t\t\t ________________________________________\n");
printf("\t\t\t\t\t|                   ++                   |\n");
printf("\t\t\t\t\t||                 + ++                 ||\n");
printf("\t\t\t\t\t||                +   ++                ||\n");
printf("\t\t\t\t\t||               +     ++               ||\n");
printf("\t\t\t\t\t||        +  + ++       ++              ||\n");
printf("\t\t\t\t\t||     ++      +  ++     ++             ||\n");
printf("\t\t\t\t\t||   +++      +     ++    ++            ||\n");
printf("\t\t\t\t\t||   +++     +     + + ++  ++           ||\n");
printf("\t\t\t\t\t||     ++   +     ++  +  ++ ++          ||\n");
printf("\t\t\t\t\t||        ++     ++    +   + ++         ||\n");
printf("\t\t\t\t\t||        +     ++      +      +        ||\n");
printf("\t\t\t\t\t||             ++   +  + +              ||\n");
printf("\t\t\t\t\t||            ++          +    ++       ||\n");
printf("\t\t\t\t\t||           ++            +     +++    ||\n");
printf("\t\t\t\t\t||       ++ + +             +     +++   ||\n");
printf("\t\t\t\t\t||    ++   ++   +            +   ++     ||\n");
printf("\t\t\t\t\t||     +  ++         +        ++        ||\n");
printf("\t\t\t\t\t||       ++               +    +        ||\n");
printf("\t\t\t\t\t||      +  +                    +       ||\n");
printf("\t\t\t\t\t| _______________________________________|\n");
printf("\n");
printf("\t\t\t\t\tAeronautics and Space Administration (ASA)\n");
printf("\t\t\t\t\t\tEstd. October 02, 2005 A.D\n");
printf("\t\t\t\t\t\t  'WE MAYBE A DREAM.....\n");
printf("\t\t\t\t BUT THIS DEFINITELY WON'T STOP US FROM BEING REALITY...'\n");
getch();
system("cls");
}

double local_g(double latitide, double height_sea_lvl)
{
    const double A = 0.0053024;
    const double B = 0.0000058;

    double H2 = (0.000003 * height_sea_lvl);
    double s1 = (A * sin(latitide));

    double s2 = (B * sin(2 * latitide));
    return (double)(9.780327 * (1 + s1 - s2) - H2);
}



admin()
{
	system("cls");
	int shiva10,ijk;
	printf("Welcome Sir\n");
	printf("Which field do you want to surf?");
	printf("\n 1. IT sector\n 2. Information Broadcasting sector\n 3. Account sector\n 4. Research sector");
	printf("\n");
	scanf("%d",&shiva10);
	if(shiva10==2)
	{
	//pratik's code//
	printf("YOU ARE VIEWING EDITOR'S WORKING SCREEN.......\n");
	getch();
		chiefeditor();	
	}
	else if(shiva10==1)
	{
		// going to satyam's code//
		printf("YOU ARE VIEWING IT ENGINEER'S WORKING SCREEN......\n");
		getch();
		itspecialist();
	}
	else if(shiva10==3)
	{
		//shashik's code//
				printf("YOU ARE VIEWING ACCOUNT MANAGER'S WORKING SCREEN.......\n");
				getch();
		accountant();
	}
	else if(shiva10==4)
	{
		printf("Sorry sir! A/c to ASA protocols even you are not allowed to spect Research sector unless the chief scientist allows you.\n Thank You! Have a nice day ^.^");
	
	track++;
	FILE *file1;
	file1=fopen("track.txt","a");
	for(ijk=1;ijk<=track;ijk++)
	{
	fprintf(file1,"%d\t",track);
}
	fclose(file1);
	

	}
	else
	{
		printf("Invalid input strike %d",shiva10);
		char choice[10];
	printf("\nSEND NOTICE. (yes/no)");
	scanf("%s",choice);
	if(strcmp(choice,"yes")==0||strcmp(choice,"YES")==0)
	{
		application();
	}
	
		getch();
	}
	
}

void accountant()
{
	system("cls");
	printf("Welcome Sir\n");
int sashik1;
printf("\n1. ROBOT ENGINE\n2. SPACE PROBE\n3. AERO CUBE\n4. AERO CHIPS\n5. ROBOTICS SYSTEM\n\n");
printf("\n SELECT FROM PROVIDED OPTIONS ONLY\n\n");
printf("Order ");
scanf("%d",&sashik1);
switch(sashik1)
{
	case 1:printf("ROBOT ENGINE\n");
	       printf("The net asset information is provided in data output screen.");
	       system("robot.xlsx");
	       logout();
	break;       
	case 2:printf("SPACE PROBE\n");
	       printf("The net asset information is provided in data output screen.");
	      system("spaceprobe.xlsx");
	      logout();
	break;
	case 3:printf("AEROCUBE\n");
		   printf("The net asset information is provided in data output screen.");
		   system("aerocube.xlsx");
		   logout();
	break;
	case 4:printf("AERO CHIPS\n");
		   printf("The net asset information is provided in data output screen.");
		   system("aerochips.xlsx");
		   logout();
	break;
	case 5:printf("ROVER SYSTEM\n");
		     printf("The net asset information is provided in data output screen.");
		    system("robotics.xlsx");
		    logout();
	break;
	default: printf("INVALID STRIKE %d LOCKING OUT SYSTEM....",sashik1);
	getch();
	system("cls");								
}
}

void mathematicsblackhole()
{
	int sachit102;
	double sachit103,sachit104,sachit105,sachit106,sachit107,sachit108,sachit109,sachit110,sachit111,sachit112;

	printf("\n\t\t1. Find Size\t\t2. Find Temperature\t\t3. Find Entropy\t\t4. Orbit Area\n");
	printf("\nDecision:\t");
	scanf("%d",&sachit102);

	if(sachit102==1)
	{
		
		printf("\n\t\tBlack Hole Mass: ");
		scanf("%lf",&sachit103);
		sachit104=sachit103*1.4822222;
		printf("\t\tRadius(r) is approximatly %0.2lfe-27",sachit104);
			//r=((2*G*sachit103)/(C*C));//
			printf("\n");
		
	}
	else if(sachit102==2)
	{
		//babaah! garo xa astronomical calculator banauna ni//
		again:
		printf("\n\t\tBlack Hole Mass: ");
		scanf("%lf",&sachit103);
		if(sachit103==0)
		{
			printf("[Mass is not supposed to be zero (0)");
			goto again;
		}
		printf("\t\tk: ");
		scanf("%lf",&sachit104);
		if(sachit104==0)
		{
			printf("[K is not supposed to be zero(0)]");
			goto again;
				}		
		sachit107=pow(299792458,3);//light speed C^3//
		sachit110=pow(10,34);
		sachit111=6.626/sachit110;//Planck's Constant h//
		sachit112=pow(10,11);
		sachit108=6.67/sachit112;//Valur of G//
		//T=((h*(C*C*C))/(8*pi*k*G*M));//
		sachit105=(sachit111*sachit107)/(8*3.141592654*sachit104*sachit108*sachit103);
		printf("\t\tTemperature is approximatly %0.3lf",sachit105);		
	}
	else if(sachit102==3)
	{
		printf("\n\t\tA: ");
		scanf("%lf",&sachit103);
		printf("\t\tk: ");
		scanf("%lf",&sachit104);
		sachit107=pow(299792458,3);//light speed C^3//
		sachit110=pow(10,34);
		sachit111=6.626/sachit110;//Planck's Constant h//
		sachit112=pow(10,11);
		sachit108=6.67/sachit112;//Valur of G//	
		sachit105=(3.141592654*sachit103*sachit107*sachit104)/(2*sachit108*sachit111);
		printf("\t\tEntropy(S) is approximatly %0.3lf",sachit105);
		}
		else if(sachit102==4)
		{
			orbitarea();
		}
	else
	{
	printf("sorry! Out of our Service");
	}
	
}

void mathematicssolarsystem()
{
	
	 long int satyam100,satyam101,satyam102,satyam103;
	 int i;
	printf("\t\t 1. Planetary Orbit Area \t2. Gravitational Force \t\t3. Distance In 3D Space\n");
	printf("\nDecision:\t");
	scanf("%d",&i);
	if(i==1)
	{
orbitarea();
} 
else if(i==2)
{

	printf("\n\t\tEnter the mass of bodies: ");
	scanf("%ld%ld",&satyam100,&satyam101);
	printf("\n\t\tEnter the distance: ");
	scanf("%ld",&satyam102);
	satyam103=(satyam100*satyam101)/(satyam102*satyam102);
	printf("\n\t\tThe force is approximatly %ldG Newton",satyam103);
	printf("\n\t\t(G = 6.67*10^-11 Nm^2/kg^2)");
}
else if(i==3)
{
	distance();
}
	getch();
	

}

void mathematicsplanetearth()
{

	int ple;
	printf("\t\t\t1. Local acceleration\t\t\t\t2. Distance between two points\t\t\t");
	printf("\nDecision:\t");
	scanf("%d",&ple);
	printf("\n");
	if(ple==1)
	{
    printf("\t\tEnter latitude:\t");
    double latitude1 = 0, height = 0;
    if (scanf("%lf", &latitude1) != 1)
    {
        fprintf(stderr, "bad input\n");
        
    }
    printf("\t\tEnter height above sea level (in metres):\t");
    if (scanf("%lf", &height) != 1)
    {
        fprintf(stderr, "bad input\n");
       
    }
     printf("\t\tLocal g (accleration due to gravity): %0.10f\n", local_g(latitude1, height));
     
 }
 else if(ple==2)
{
distance();
}
}

void mathematicseinsteinfieldequation()
{
	na();
}

void mathematicsparabolicequations()
{
	system("cls");
	int choi;
		printf("\t\t\t1. Quadratic Equation Solution\n\t\t\t2. Derivative Using Forward Difference\t\t\t");
	printf("\nDecision:\t");
	scanf("%d",&choi);
	if(choi==1)
	{
	int a, b, c, d;
   int root1, root2, realPart, imaginaryPart;
   printf("Enter cofficients (a, b, and c): ");
   scanf("%d %d %d", &a, &b, &c);
   printf("The quadratic equation: %dx²%+dx%+d \n",a,b,c);
   d = (b*b) - 4*a*c; //discriminant
   if( d>1 )
   {
     root1 = (-b+sqrt(d)) / 2*a;
     root2 = (-b-sqrt(d)) / 2*a;
     printf("Roots are %d and %d\n", root1, root2);
   }
   else if(d==0)
   {
     root1 = root2 = -b/2*a;
     printf("Roots are %d and %d\n", root1, root2);
   }
   else
   {
     realPart = -b/2*a;
     imaginaryPart = sqrt(d)/2*a;
     printf("root1 = %d + i(%d)\n", realPart, imaginaryPart);
     printf("root1 = %d - i(%d)\n", realPart, imaginaryPart);
   }
}
else if(choi==2)
{
system("cls");	
 float x[20], y[20][20], xp, h, sum=0.0, term, first_derivative;
 int i,j, n, index, flag = 0, sign=1;

 /* Reading number of data */
 printf("Enter number of data: ");
 scanf("%d", &n);

 /* Reading actual data of x and y */
 printf("Enter data:\n");
 for(i = 0; i < n ; i++)
 {
  printf("x[%d] = ", i);
  scanf("%f", &x[i]);
  printf("y[%d] = ", i);
  scanf("%f", &y[i][0]);
 }

 /* Reading calculation point */
 printf("Enter at what value of x you want to calculate derivative: ");
 scanf("%f", &xp);

 /* Checking whether given point (xp) is
 a valid point in x data or not */
 for(i=0;i< n;i++)
 {
     if (fabs(xp - x[i])< 0.0001)
     {
        /* index of calculation point */
        index = i;
        flag = 1;
        break;
     }
 }

 /* if flag is still 0 then given point (xp)
 is not a valid point (not in list of x data)
 for this calculation */
 if (flag==0)
 {
     printf("Invalid calculation point. Program exiting...");
     exit(0);
 }

 /* Generating Forward Difference Table */
 for(i = 1; i < n; i++)
 {
  for(j = 0; j < n-i; j++)
  {
      y[j][i] = y[j+1][i-1] - y[j][i-1];
  }
 }

 /* Calculate finite difference */
 h = x[1] - x[0];

 /* Applying formula for calculating sum of
 different terms in formula to find derivatives
 using forward difference formula */
 for(i=1; i< n-index; i++)
 {
     term = pow(y[index][i], i)/i;
     sum = sum + sign*term;
     sign = -sign;
 }

 /* Dividing by h */
 first_derivative = sum/h;

 /* Displaying final result */
 printf("First derivative at x = %0.2f is %0.2f", xp, first_derivative);

}
}

void mathematicsuniverse()

{
int i;
	printf("\t\t1. Celestial Orbit Area \t\t2. Distance In 3D Space\n");
	printf("\nDecision:\t");
	scanf("%d",&i);
	if(i==1)
	{
orbitarea();
}
else if(i==2)
{
	distance();
}
}

void na()
{
	printf("\n\t\t\t**           **\t");
	printf("\n\t\t\t***          **\t                      ");
	printf("\n\t\t\t** *         **\t           *          ");
	printf("\n\t\t\t**  *        **\t          * *         ");
    printf("\n\t\t\t**   *       **\t         *   *        ");
	printf("\n\t\t\t**    *      **\t        *     *       ");
	printf("\n\t\t\t**     *     **\t       *       *      ");
	printf("\n\t\t\t**      *    **\t      *         *     ");
	printf("\n\t\t\t**       *   **\t     *************    ");
	printf("\n\t\t\t**        *  **\t    ***************   ");
	printf("\n\t\t\t**         * **\t   *               *  ");
	printf("\n\t\t\t**          ***\t  *                 * ");
	printf("\n\t\t\t**           **\t *                   *");
}

void scientist()
{
	char ch;
	int tries=0;
	FILE *file2;
	file2=fopen("track.txt","r");
		while ((ch = fgetc(file2)) != EOF)
		{
      tries++;
        }
        fclose(file2);
int shiva10;
	char shiva11[50];
	rte:
	system("cls");
	printf("Calculations to perform:\n");
	printf("\t\t ________________________________________________________________________________________\n");
	printf("\t\t||\t\t\t\tAvailable Calculation Areas:\t\t\t\t|| \n");
	printf("\t\t||______________________________________________________________________________________||\n");
	printf("\t\t||                                                                                      ||\n");
	printf("\t\t|| 1.|\tRelated to Black Holes\t\t||2.|\t Related to Solar System\t\t||\n");
	printf("\t\t|| 3.|\tRelated to Planet Earth\t\t||4.|\t Related to Universe\t\t\t||\n");
	printf("\t\t|| 5.|\tRelated to Quadratic Equations\t||6.|\t Related to Einstein Field Equation\t||\n");
	printf("\t\t||______________________________________________________________________________________||\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	printf("\n");
	printf("Descision:\t");
	scanf("%d",&shiva10);
	printf("\n");
	printf("[Note: %d FAILED ACCESS ATTEMPTS FROM ADMINISTRATOR.]\n",tries/2);
	
		char choice[10];
	printf("\nSEND NOTICE. (yes/no)");
	scanf("%s",choice);
	if(strcmp(choice,"yes")==0||strcmp(choice,"YES")==0)
	{
		application();
	}
		printf("------------------------------------------------------------------------------------------------------------------------");
	switch(shiva10)
	{
		case 1:mathematicsblackhole();
		logout();
		break;
		case 2:mathematicssolarsystem();
		logout();
		break;
		case 3:mathematicsplanetearth();
		logout();
		break;
		case 4:mathematicsuniverse();
		logout();
		break;
		case 5:mathematicsparabolicequations();
		logout();
		break;
		case 6:mathematicseinsteinfieldequation();
		logout();
		break;
		default:printf("Invalid Decision");
		printf("\n To reroute please enter your password\t");
		scanf("%s",shiva11);
		if(strcmp(shiva11,"admin1")==0)
		{
		goto rte;
	}
		break;
	}
	getch();
}

/*Logging out huss ^.^*/

void logout()
{
	char flagout[12];
	printf("\nPress l/L to logout");
	scanf("%s",flagout);
	if(strcmp(flagout,"L")==0||strcmp(flagout,"l")==0)
	{
		backagain();
	}
}

void distance()
{
	printf("\n\t\t");
    int x1, x2, y1, y2,z1,z2 ,dtn;    
    printf("Coordinate (x1 , y1 , z1) = ");
    scanf("%d %d%d",&x1, &y1,&z1);
	printf("\n\t\tCoordinate (x2 , y2 , z2) = ");
    scanf("%d %d%d",&x2, &y2,&z2);
    int x = pow((x2- x1), 2);
    int y = pow((y2- y1), 2);
    int z = pow((z2- z1), 2);
    dtn = sqrt(x + y + z);
printf("\n\t\tThe Distance Between Them In Space is %d\n", dtn); 
}

void orbitarea()
{
printf("\n\t\t");	
	float major44, minor44, area66;
    /* Reading length of major axis */
    printf("Enter major axis: ");
    scanf("%f", &major44);
    /* Reading length of minor axis */
    printf("\t\tEnter minor axis: ");
    scanf("%f", &minor44);
    /* Calculating area of an ellipse */
    area66 = PI * major44 * minor44;
	/* Displaying result */
    printf("\t\tOrbit Area is approximatly %0.4f", area66);
    printf("\n");
    logout();
}

void application()
{
system("cls");
system("COLOR 70");
    char sentence[10000],topic[100],date[50],address[80],to[50],by[50],bounce[2];
    // creating file pointer to work with files
    //time_t t=time(NULL);
    
    FILE *fptr;
    // opening file in writing mode
    fptr = fopen("program.txt", "w+");
	// exiting program 
	// fprintf(fptr, "\t\t\t\t\t\t\t\t\t%s", date);
	
	
    
     printf("");
    fgets(bounce, sizeof(bounce), stdin);
    fprintf(fptr, "\t\t\t\t\t\t\t\t\t\t\t\t\t%s", bounce);
    
    printf("Address:\t");
    fgets(address, sizeof(address), stdin);
    fprintf(fptr, "\t\t\t\t\t\t\t\t\t\t\t\t\t%s", address);
    
    printf("Date:\t");
    fgets(date, sizeof(date), stdin);
    fprintf(fptr, "\t\t\t\t\t\t\t\t\t\t\t\t\t%s", date);
    
     printf("To:\t");
    fgets(to, sizeof(to), stdin);
    fprintf(fptr, "\n\t%s", to);
    
    	printf("Subject:\t");
    fgets(topic, sizeof(topic), stdin);
    fprintf(fptr, "\n\t\t\t\t\t\t\t%s", topic);

    
    printf("Leave your message:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "\n\t\t%s", sentence);
    
    printf("By:\t");
    fgets(by, sizeof(by), stdin);
    fprintf(fptr, "\n\t\t\t\t\t\t\t\t\t\t\t\t\t%s", by);
    
    fclose(fptr);
    

system("cls");
printf("\n\n");
    FILE* ptr;
    char ch;
    // Opening file in reading mode
    ptr = fopen("program.txt", "r");
     // Printing what is written in file
    // character by character using loop.
    //printf("Viewer,\n\n");
	do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
        // Checking if character is not EOF.
        // If it is EOF stop eading.
    } while (ch != EOF);
 
    // Closing the file
    fclose(ptr);
    getch();    
system("cls");    
}

