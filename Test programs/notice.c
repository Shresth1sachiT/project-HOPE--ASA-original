#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void main() 
{
	
	system("COLOR 70");
    char sentence[10000],topic[100],date[50],address[80],to[50],by[50];
    // creating file pointer to work with files
    //time_t t=time(NULL);
    
    FILE *fptr;
    // opening file in writing mode
    fptr = fopen("program.txt", "w+");
	// exiting program 
	// fprintf(fptr, "\t\t\t\t\t\t\t\t\t%s", date);
	
	
    
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
}
