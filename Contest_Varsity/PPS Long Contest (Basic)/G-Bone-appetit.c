#include<stdio.h>
int main(){
    int N, M, X, Y;

    scanf("%d %d", &N, &M);
    scanf("%d %d", &X, &Y);

    int output = N*X + M*Y;
    printf("%d\n", output);


    return 0;
}