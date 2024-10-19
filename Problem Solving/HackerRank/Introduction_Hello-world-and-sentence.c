/*
Title in HackerRank: "Hello, World!" and "Life is beautiful"

Link: 
https://www.hackerrank.com/challenges/hello-world-c?isFullScreen=true

*/

#include <stdio.h>

int main() {
    char s[100];

    printf("Hello, World!\n");
    fgets(s, sizeof(s), stdin);

    printf("%s\n", s);

    return 0;
}