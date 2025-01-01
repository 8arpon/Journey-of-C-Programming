#include<stdio.h>
int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    float total = ((a * 3.5) + (b * 7.5)) / (3.5 + 7.5);
    printf("MEDIA = %.5f\n", total);


    return 0;
}