/*
Title in HackerRank: "Hello, World!" and "Life is beautiful"
*/

#include <stdio.h>

int main() {
    char s[100];

    printf("Hello, World!\n");
    fgets(s, sizeof(s), stdin);

    printf("%s\n", s);

    return 0;
}