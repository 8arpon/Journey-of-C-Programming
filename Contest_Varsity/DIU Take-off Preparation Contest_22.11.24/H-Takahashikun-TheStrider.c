#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int degree = 1;
    while((degree * number) % 360 != 0){
        degree++;
    }

    printf("%d\n", degree);
    return 0;
}