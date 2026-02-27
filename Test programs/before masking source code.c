
		
		system("cls");
	FILE *fp;
	int i=1;
	char ID[8],name[30],pass[8],position[150],str[100],check[100];
	
//initializing login design on//
	
logo();
printf("\n");
time_t t=time(NULL);
printf("                                                                                            %s",ctime(&t));
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
printf("\n\t\t\t\t\t\tSYSTEM LOADED \n\t\t\t\t\t PRESS ANY KEY TO CONTINUE [^.^]");
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
