/*
Title in HackerRank: "Playing With Characters"

Link: https://www.hackerrank.com/challenges/playing-with-characters?isFullScreen=true

*/


#include<stdio.h>
#include<string.h>
int main(){

    char ch, s[100], sen[100];
    scanf("%c", &ch);

    while (getchar() != '\n');
    fgets(s, sizeof(s), stdin);
    fgets(sen, sizeof(sen), stdin);

    printf("%c\n", ch);
    printf("%s", s);
    printf("%s", sen);


    return 0;
    getchar();
}