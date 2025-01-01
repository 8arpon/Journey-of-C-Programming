#include<stdio.h>
int main(){
    int x;
    float y;
    scanf("%d", &x);
    scanf("%f", &y);
    float total =(float) x / y;
    printf("%.3f km/l\n", total);


    return 0;
}