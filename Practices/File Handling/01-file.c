#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("arpon.txt", "a");
    printf("Write your name: ");
    char name[50];
    fgets(name, sizeof(name), stdin);
    printf("Write your thoughts: ");
    char script[500];
    fgets(script, sizeof(script), stdin);
    
    if(file == NULL){
        printf("No file found here...\n");
    }
    else{

        fprintf(file, "Name: %s", name);
        fprintf(file, "Thought: %s", script);
        fclose(file);

    }

    return 0;
}