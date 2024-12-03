/*
    Title: For Loop in C
    Link:
    https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
*/

#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i = 0;
    for(i = 0; i < 10; i++){
        if(a == 1 && b == 1){
        printf("one\n");
    }
    else if(a == 2 && b == 2){
        printf("two\n");
    }
    else if(a == 3 && b == 3){
        printf("three\n");
    }
    else if(a == 4){
        printf("four\n");
    }
    else if(a == 5){
        printf("five\n");
    }
    else if(a == 6){
        printf("six\n");
    }
    else if(a == 7){
        printf("seven\n");
    }
    else if(a == 8){
        printf("eight\n");
    }
    else if(a == 9){
        printf("nine\n");
    }
    else if(n > 9){
        printf("Greater than 9\n");
    }
    }

    return 0;
}