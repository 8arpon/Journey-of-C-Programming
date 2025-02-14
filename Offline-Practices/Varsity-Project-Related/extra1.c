#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    int len = strlen(str);
    int i;
    int sum = 0;
    int a;
    for(i = 0; i < len; i++){
        a = str[i] - '0';
        sum = sum + a;
    }
    printf("%d\n", sum);

    return 0;
}