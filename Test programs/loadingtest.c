#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int counter = 0;
    char buf[100];
    char cur_word[100];
     
    FILE *infile0;
    FILE *infile1;
    FILE *infile2;
    FILE *infile3;
    FILE *infile4;
    FILE *infile5;
    FILE *infile6;
    FILE *infile7;
    FILE *infile8;
 
        infile0 = fopen("f0.txt","r");
        infile1 = fopen("f1.txt","r");
        infile2 = fopen("f2.txt","r");
        infile3 = fopen("f3.txt","r");
        infile4 = fopen("f4.txt","r");
        infile5 = fopen("f5.txt","r");
        infile6 = fopen("f6.txt","r");
        infile7 = fopen("f7.txt","r");
        infile8 = fopen("f8.txt","r");
         
        if(infile0 == NULL){
            printf("Error openring infile0. Now exit!\n");
            exit(1);
        }else if(infile1 == NULL){
            printf("Error openring infile1. Now exit!\n");
            exit(1);
        }else if(infile2 == NULL){
            printf("Error openring infile2. Now exit!\n");
            exit(1);
        }else if(infile3 == NULL){
            printf("Error openring infile3. Now exit!\n");
            exit(1);
        }else if(infile4 == NULL){
            printf("Error openring infile4. Now exit!\n");
            exit(1);
        }else if(infile5 == NULL){
            printf("Error openring infile5. Now exit!\n");
            exit(1);
        }else if(infile6 == NULL){
            printf("Error openring infile6. Now exit!\n");
            exit(1);
        }else if(infile7 == NULL){
            printf("Error openring infile7. Now exit!\n");
            exit(1);
        }else if(infile8 == NULL){
            printf("Error openring infile8. Now exit!\n");
            exit(1);
        }
         
        printf("Type a word to search: ");
        scanf("%s", cur_word);
         
        puts("Searching in the f0.txt...");
        while(fscanf(infile0, "%s", buf) != EOF){
             
            if(strcmp(buf, cur_word) == 0){
                counter++;
            }
        }
         
        puts("Searching in the f1.txt...");
        while(fscanf(infile1, "%s", buf) != EOF){
             
            if(strcmp(buf, cur_word) == 0){
                counter++;
            }
        }
         
        puts("Searching in the f2.txt...");
        while(fscanf(infile2, "%s", buf) != EOF){
             
            if(strcmp(buf, cur_word) == 0){
                counter++;
            }
        }
         
        puts("Searching in the f3.txt...");
        while(fscanf(infile3, "%s", buf) != EOF){
             
            if(strcmp(buf, cur_word) == 0){
                counter++;
            }
        }
         
        puts("Searching in the f4.txt...");
        while(fscanf(infile4, "%s", buf) != EOF){
             
            if(strcmp(buf, cur_word) == 0){
                counter++;
            }
        }
         
        puts("Searching in the f5.txt...");
        while(fscanf(infile5, "%s", buf) != EOF){
             
            if(strcmp(buf, cur_word) == 0){
                counter++;
            }
        }
         
        puts("Searching in the f6.txt...");
        while(fscanf(infile6, "%s", buf) != EOF){
             
            if(strcmp(buf, cur_word) == 0){
                counter++;
            }
        }
         
        puts("Searching in the f7.txt...");
        while(fscanf(infile7, "%s", buf) != EOF){
             
            if(strcmp(buf, cur_word) == 0){
                counter++;
            }
        }
         
        puts("Searching in the f8.txt...");
        while(fscanf(infile8, "%s", buf) != EOF){
             
            if(strcmp(buf, cur_word) == 0){
                counter++;
            }
        }
         
        printf("\n\nGlobal Counter is: %d\n", counter);
         
    return 0;
}
