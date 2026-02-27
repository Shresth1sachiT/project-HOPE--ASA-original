#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void scientist();/*This is for scientists to perform calculations*/

//scientist related//
void mathematicssolarsystem();
void mathematicsblackhole();
void mathematicsplanetearth();
void mathematicsuniverse();
void mathematicsparabolicequations();
//scientist related upto here//

/*definite values*/
	#define C 299792458
	#define G 0.00000000006672
    #define pi 3.14
    #define h 0.0000000000000000000000000000000006626
    #define k 1000000000000000000000
/*upto here*/

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
	FILE *fp;
	int i=1;
	char ID[8],name[30],pass[8],position[150],str[100],check[100];
	
//initializing login design on//
	
logo();
printf("\n\n\n\n\n\n");
printf("________________________________________________________________________________________________________________________\n");
printf("\t\t\t\t\t\t");
printf("ID:\t  | ");
scanf("%s",str);
printf("________________________________________________________________________________________________________________________\n");
printf("\t\t\t\t\t\t");
printf("Password: | ");
scanf("%s",check);
printf("________________________________________________________________________________________________________________________\n");
getch();

//login design over//

	fp=fopen("admin.txt","r");
while((fscanf(fp,"%s\t%s\t%s\t%s",name,ID,pass,position))!=EOF)
{
if(strcmp(str,ID)==0)
{
	if(strcmp(check,pass)==0)
	{
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
}
	fclose(fp);
getch;
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
		break;
		case 2: system("asteroid.png");
		break;
		case 3: system("blackhole.png");
		break;
		case 4: system("civilization.png");
		break;
		case 5: system("constellation.png");
		break;
		case 6: system("galaxy.png");
		break;
		case 7: system("mars.png");
		break;
		case 8: system("moon.png");
		break;
		case 9: system("multiverse.png");
		break;
		case 10: system("satellite.png");
		break;
		case 11: system("solarsystem.png");
		break;
		case 12: system("star.png");
		break;
		case 13: system("sun.png");
		break;
		case 14: system("universe.png");
		break;
		case 15: system("whitehole.png");
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

admin()
{
	system("cls");
	int shiva10;
	printf("Welcome Sir\n");
	printf("Which field do you want to surf?");
	printf("\n 1. IT sector\n 2. Information Broadcasting sector\n 3. Account sector\n 4. Research sector");
	printf("\n");
	scanf("%d",&shiva10);
	if(shiva10==2)
	{
	//pratik's code//
		chiefeditor();	
	}
	else if(shiva10==1)
	{
		// going to satyam's code//
		itspecialist();
	}
	else if(shiva10==3)
	{
		//shashik's code//
	}
	else if(shiva10==4)
	{
		printf("Sorry sir! A/c to ASA protocols even you are not allowed to spect Research sector unless the chief scientist allows you.\n Thank You! Have a nice day ^.^");
	}
	else
	{
		printf("Invalid input strike %d",shiva10);
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
	default: printf("INVALID STRIKE %d LOGGING OUT FROM SYSTEM....",sashik1);
	getch();
	system("cls");								
}
}

void mathematicsblackhole()
{
	int shiva12;
	float shiva13;
	printf("Press\n");
	printf("1. Find Size\n2. Find Temperature\n3. Find Entropy\n");
	scanf("%d",&shiva12);
	if(shiva12==1)
	{
		float r;
		printf("Mass of Black Hole in Long ton(lt):\t");
		scanf("%f",&shiva13);
		printf("Radius(r)=2GM/c^2");
		
		//r=((2*G*shiva13)/(C*C));//
		
		printf("\nThe radius of Black Hole should be around %f Light Years",r);
		printf("\n");
		na();
	}
	else if(shiva12==2)
	{
		float T,M;
		printf("Enter mass of black hole\n");
		scanf("%f",M);
		printf("\nloading....");
		sleep(3);
		printf("\nT=(hc^3)/(8PiKGM)");
		
		//T=((h*(C*C*C))/(8*pi*k*G*M));//
		
		printf("\n\nTemperature of a Black Hole is %f",T);
		printf("\n");
		na();
	}
	else if(shiva12==3)
	{
		float S,A;
		printf("Enter the value of A: ");
		scanf("%s",A);
		printf("\nverifing....");
		printf("\nS=(Pi A C^3 k)/(2 G h)");
	
		printf("\n\nThe Entropy of a Black HOLE %f",S);
		printf("\n");
		na();
	}
	else
	{
	printf("sorry! Out of our Service");
	}
	na();
}

void mathematicssolarsystem()
{
na();
}

void mathematicsplanetearth()
{
	na();
	printf("\nThis Field is not available for now. Sorry! have a nice day");
}

void mathematicseinsteinfieldequation()
{
	na();
	printf("\nThis Field is not available for now. Sorry! have a nice day");
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
	na();
	printf("\nThis Field is not available for now. Sorry! have a nice day");
}

void mathematicsuniverse()

{
	na();
	printf("\nThis Field is not available for now. Sorry! have a nice day");
}

void na()
{
		printf("\norbital equations solve here!!\n");
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
	getch();
}

void scientist()
{
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
	printf("\t\t|| 5.|\tRelated to Parabolic Equations\t||6.|\t Related to Einstein Field Equation\t||\n");
	printf("\t\t||______________________________________________________________________________________||\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	printf("\n");
	
	printf("Descision:\t");
	scanf("%d",&shiva10);
	printf("\n");
	switch(shiva10)
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
		printf("\a");
	system("cls");
	}
}


