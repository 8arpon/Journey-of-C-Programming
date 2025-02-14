#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    char letter1, letter2;
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    scanf("%c", &letter1);
    getchar();
    scanf("%c", &letter2);

    int len = strlen(name);
    for(int i = 0; i < len; i++){
        if(name[i] == letter1){
            name[i] = letter2;
        }
    }
    printf("%s\n", name);
    return 0;
}