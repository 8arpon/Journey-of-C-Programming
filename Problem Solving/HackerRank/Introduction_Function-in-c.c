/*
Title in HackerRank: "Function in C"

Link: https://www.hackerrank.com/challenges/functions-in-c?isFullScreen=true

*/

#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
    int max_value = fmax(fmax(fmax(a, b), c), d);
    printf("%d\n", max_value);


    return 0;
}