//I need to understand it more deeply for some lackings
#include <stdio.h>
int main() {
    int till;
    printf("Enter a number to find all the prime numbers till this number: ");
    scanf("%d", &till);

    for (int num = 2; num <= till; num++) {
        int a = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                a = 0;
                break;
            }
        }

        if (a) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}