#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void ghimire();
FILE*websites;
void main()
{ int pratik1;
printf("\n what do you want to learn about?");
printf("\n");
pratik3:
printf("\t 1.Public Documents \t\t 2.Research Papers \n \t 3.Missions \t\t\t 4.vlogs \n \t 5. Websites \t\t\t 6. Other Organizations \n \t 7. Visions");
printf("\n");
printf("___________________________________________");
printf("\n");
printf("Enter your choice (from 1 to 7): \t");
scanf("%d",&pratik1);
char pratik2[1000];
switch(pratik1)
{
	case 1:system("publicdocument.pdf");
	break;
	case 2:system("researchpaper.pdf");
	system("researchpaper2.pdf");
	system("researchpaper3.pdf");
	break;
	case 3:system("3.png");
	break;
	case 4:system("2.png");
	system("4.png");
	break;
	case 5:websites=fopen("websites.txt","r");
	while((fscanf(websites,"%s",pratik2))!=EOF)
	{
		printf("%s",pratik2);
		printf("\n");
	}
	break;
	case 6:system("otherorganization.txt");
	break;
	case 7:system("vision.pdf");
	break;
	default:printf("sorry the option is not available\n");
	printf("please choose the available options");
	goto pratik3;
	}
	getch();
}
