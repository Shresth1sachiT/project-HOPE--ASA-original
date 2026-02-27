#include<stdio.h>
#include<conio.h>
#include<string.h>
char satyam1[20],satyam2[35],satyam3[8],satyam5[10];long int satyam4;
FILE *satyam;
void main()
{
printf("Welcome Sir Satyam \n");
printf("Search for information about....(solar family only): \t");
	scanf("%s",satyam1);
	if(strcmp(satyam1,"sun")==0)
	{printf("What information do you want\nradius \tmass \tdistance from earth\t density\t gravity\n");
		scanf("%s",satyam2);
		if(strcmp(satyam2,"radius")==0)
		{printf("696000 km");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0)
			{printf("In order to change the data you need PASSWORD.So,Enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin2")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
				printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        %d\n",satyam4);
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t	1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n");
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n");
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n");
			}
			else
			printf("WRONG PASSWORD!!");
			}
			else if(strcmp(satyam3,"no")==0)
			{
			printf("\nokay");
		}
		}
		else if(strcmp(satyam2,"mass")==0)
		{printf("1.9891 x 10^30 kg");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0)
			{printf("In order to change the data you need PASSWORD.So,enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin2")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
			printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n");
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t	%ld\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n",satyam4);
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n");
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n");
			}
			else
			printf("WRONG PASSWORD!!");
			}
			else if(strcmp(satyam3,"no")==0)
			{printf("\nokay");
		}
		}
		else if(strcmp(satyam2,"distancefromearth")==0)
		{
			printf("1.471 - 1.521 x 10^8 km");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0)
			{
				printf("In order to change the data you need PASSWORD.So,enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin2")==0)
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
			}
			else
			printf("WRONG PASSWORD!!");
			}
			else if(strcmp(satyam3,"no")==0)
			{printf("\nokay");
		}}
			else if(strcmp(satyam2,"density")==0)
		{printf("1408 kg per cubic meter");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0)
			{printf("In order to change the data you need PASSWORD.So,enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin2")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
			printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n");
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t		1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n");
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	%ld\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n",satyam4);
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n");
			}
			else
			printf("WRONG PASSWORD!!");
			}
			else if(strcmp(satyam3,"no")==0)
			{
			printf("\nokay");
		}}
				else if(strcmp(satyam2,"gravity")==0)
		{printf("274 meter pr.square second");
			printf("\nDo you want to change the data?yes?no?\n");
			scanf("%s",satyam3);
			if(strcmp(satyam3,"yes")==0)
			{printf("In order to change the data you need PASSWORD.So,enter the password first:");
				scanf("%s",satyam5);
				if(strcmp(satyam5,"admin2")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
			printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n");
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t		1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n");
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n");
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	%ld\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n",satyam4);
			}
			else
			printf("WRONG PASSWORD!!");
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
				if(strcmp(satyam5,"admin2")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
				printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	%ld\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n",satyam4);
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t	1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n");
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n");
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n");
			}
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
				if(strcmp(satyam5,"admin2")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
			printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n");
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t	1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	%ld\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n",satyam4);
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n");
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n");
			}
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
				if(strcmp(satyam5,"admin2")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
			printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n");
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t		1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n");
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	%ld\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n",satyam4);
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	9.798\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n");
			}
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
				if(strcmp(satyam5,"admin2")==0)
			{printf("Enter the correct data:");
			scanf("%ld",&satyam4);
			printf("The corrected data is updated in the file");
			satyam=fopen("satyam.txt","w");
				fprintf(satyam,"Rank\t\t Name\t\t Equatorial Radius\n 1\t	Jupiter\t        1493\n 2\t	Saturn\t	60268\n 3 \t\tUranus\t	25559\n 4\t	Neptune\t	24764\n 5\t	Earth\t	6378.1\n 6\t	Venus\t	6051.8\n 7\t	Mars\t	3396.2\n 8\t	Mercury\t	2439.7\n 9\t	Moon\t	1738.1\n 10\t        Sun\t        696000\n");
		fprintf(satyam,"\nRank\t\t Name\t\t Mass(kg)\n 1\t	Sun\t		1.9891 x 10^30\n 2\t	Jupiter\t	1.8986 x 10^27\n 3\t	Saturn\t	5.6846 x 10^26\n 4\t	Neptune\t	10.243 x 10^25\n 5\t	Uranus\t	8.6810 x 10^25\n 6\t	Earth\t	5.9736 x 10^24\n 7\t	Venus\t	4.8685 x 10^24\n 8\t	Mars\t	6.4185 x 10^23\n 9\t	Mercury\t	3.3022 x 10^23\n 10\t	Moon\t	7.3490 x 10^22\n");
fprintf(satyam,"\nRank\t	Name\t	Distance from Earth (kilometer)\n 1\t	Neptune\t	4.3059 - 4.6873 x 10^9\n 2\t	Uranus\t	2.5819 - 3.1573 x 10^9\n 3\t	Saturn\t	1.1955 - 1.6585 x 10^9\n 4\t	Jupiter\t	5.885 - 9.681 x 10^8\n 5\t	Sun\t	1.471 - 1.521 x 10^8\n 6\t	Mercury\t	0.773 - 2.219 x 10^8\n 7\t	Mars\t	0.557 - 4.013 x 10^8\n 8\t	Venus\t	0.382 - 2.61 x 10^8\n 9\t	Moon\t	0.378 x 10^6\n");
fprintf(satyam,"\nRank\t	Name\t	Density (kg pr. cubic meter)\n 1\t	Earth\t	5515\n 2\t	Mercury\t	5427\n 3\t	Venus\t	5243\n 4\t	Mars\t	3933\n 5\t	Moon\t	3350\n 7\t	Neptune\t	1638\n 8\t	Sun\t	1408\n 9\t	Jupiter\t	1326\n 10\t	Uranus\t	1270\n 11\t	Saturn\t	687\n");
fprintf(satyam,"\nRank\t	Name\t	Surface Gravity (meter pr. square second)\n 1\t	Sun\t	274\n 2\t	Jupiter\t	24.92\n 3\t	Neptune\t	11.15\n 4\t	Saturn\t	10.44\n 5\t	Earth\t	%ld\n 6\t	Uranus\t	8.87\n 7\t	Venus\t	8.87\n 8\t	Mars\t	3.71\n 9\t	Mercury\t	3.7\n 10\t	Moon\t	1.62\n",satyam4);
			}
			else
			printf("WRONG PASSWORD!!");
			}
			else if(strcmp(satyam3,"no")==0)
			{
			printf("\nokay");
		}
		}
		}
		getch();
}
