#include<stdio.h>
#include<conio.h>
struct idcheck
{
	char ID[16];
	char pass[30];
	char name[50];
}s1,s2,s3,s4,s5,s6,s7;
void main()
{
	FILE *ptr;
	ptr=fopen("pwdn.rbd","wb+");
	if(ptr==NULL)
	{printf("nono");
	}
	else
	{
		printf("ID: ");
		gets(s1.ID);
		printf("\nPassword: ");
		gets(s1.pass);
		printf("\nName: ");
		gets(s1.name);
		fwrite(&s1,sizeof(s1),1,ptr);
		fseek(ptr,0,SEEK_SET);
		
		
		printf("ID: ");
		gets(s2.ID);
		printf("\nPassword: ");
		gets(s2.pass);
				printf("\nName: ");
		gets(s2.name);
		fwrite(&s2,sizeof(s2),1,ptr);
		fseek(ptr,0,SEEK_SET);
		
		printf("ID: ");
		gets(s3.ID);
		printf("\nPassword: ");
		gets(s3.pass);
				printf("\nName: ");
		gets(s3.name);
		fwrite(&s3,sizeof(s3),1,ptr);
		fseek(ptr,0,SEEK_SET);
		
		
		printf("ID: ");
		gets(s4.ID);
		printf("\nPassword: ");
		gets(s4.pass);
				printf("\nName: ");
		gets(s4.name);
		fwrite(&s4,sizeof(s4),1,ptr);
		fseek(ptr,0,SEEK_SET);
		
		
		printf("ID: ");
		gets(s5.ID);
		printf("\nPassword: ");
		gets(s5.pass);
				printf("\nName: ");
		gets(s5.name);
		fwrite(&s5,sizeof(s5),1,ptr);
		fseek(ptr,0,SEEK_SET);
		
		
		printf("ID: ");
		gets(s6.ID);
		printf("\nPassword: ");
		gets(s6.pass);
				printf("\nName: ");
		gets(s6.name);
		fwrite(&s6,sizeof(s6),1,ptr);
		fseek(ptr,0,SEEK_SET);
		
		
		printf("\n\n ID: %s",s2.ID);
	}
	
}
