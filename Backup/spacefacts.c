#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char ch[5],sachit1[5];
int sachit2;
	printf("Do you wanna learn something new about space, yah?(yes/no):");
	scanf("%s",ch);
	if(strcmp(ch,"yes")==0||strcmp(ch,"YES")==0)
	{
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
	return 0;
}
