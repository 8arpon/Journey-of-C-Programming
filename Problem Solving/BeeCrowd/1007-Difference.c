#include<stdio.h>
int main(){
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    int num1 = A * B;
    int num2 = C * D;
    printf("DIFERENCA = %d\n", num1 - num2);

    return 0;
}