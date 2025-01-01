#include<stdio.h>
int main(){
    int num, a;
    float b;
    scanf("%d %d %f", &num, &a, &b);
    float salary = (float)a * b;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %0.2f\n", salary);

    return 0;
}