#include<stdio.h>
#include<string.h>
int main(){
    char str1[30];
    char str2[30];
    
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    int len1 = strlen(str1);
    printf("%d\n", len1);
    int i = 0;
    while(len1 > 0){
        str2[i] = str1[len1 - 1];
        len1--;
        i++;
    }
    str2[i] = '\0';
    printf("%s %s\n", str1, str2);
    if(strcmp(str1, str2) == 0){
        printf("Palindrome\n");
    }
    else{
        printf("Not a Palindrome\n");
    }

    return 0;
}