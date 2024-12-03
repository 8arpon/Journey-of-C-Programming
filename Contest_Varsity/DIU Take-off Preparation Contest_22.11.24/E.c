#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if (number >= 42){
        number = number + 1;
    }
    printf("AGC%03d\n", number);


    return 0;
}