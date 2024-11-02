#include<stdio.h>
int main(){
    int m, n;
    printf("Write Length and Width: ");
    scanf("%d %d", &m, &n);
    int rectangleArea = m * n;
    printf("The Area of Rectangle: %d\n", rectangleArea);

    return 0;
}