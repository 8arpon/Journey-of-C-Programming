/*
Title in HackerRank: "Function in C"
*/

#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
    int max_value = fmax(fmax(fmax(a, b), c), d);
    printf("%d", max_value);


    return 0;
}