#include<stdio.h>
int main(){
    float A, B, C, D;
    scanf("%f %f %f %f", &A, &B, &C, &D);
    float sum = A + B + C;
    float lostProduct = (sum * D) / 100;
    float havingProduct = sum - lostProduct;
    printf("A total of %0.2f kg of foodgrains delivered.\n", havingProduct);


    return 0;
}