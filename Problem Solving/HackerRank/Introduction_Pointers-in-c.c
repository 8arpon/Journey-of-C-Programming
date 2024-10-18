/*
Title in HackerRank: "Pointers in C"

Link: https://www.hackerrank.com/challenges/pointer-in-c?isFullScreen=true

*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    int sum, sub;
    sum = a + b;
    sub = a - b;
    int final_Sub = abs(sub);

    printf("Sum is: %d\nSub is: %d\n", sum, final_Sub);



    return 0;
}