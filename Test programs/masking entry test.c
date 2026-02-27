
		
		system("cls");
int i1=0,i2=0;
	char ch1,ch2;
	char pwd[30],id[30];
	
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
printf("________________________________________________________________________________________________________________________\n");
printf("\t\t\t\t\t\t");
printf("Password: | ");
while((ch1=_getch())!=13)
	{
		pwd[i1]=ch1;
		i1++;
		printf("*");
	}
	pwd[i1]='\0';
printf("________________________________________________________________________________________________________________________\n");
printf("\n\t\t\t\t\t\tSYSTEM LOADING \n\t\t\t\t\t PRESS ANY KEY TO CONTINUE [^.^]");
getch();

//login design over//

	fp=fopen("admin.txt","r");
while((fscanf(fp,"%s\t%s\t%s\t%s",name,ID,pass,position))!=EOF)
{
if(strcmp(id,ID)==0)
{
	if(strcmp(pwd,pass)==0)
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
