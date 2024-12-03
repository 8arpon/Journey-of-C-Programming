#include <stdio.h>
void sum(int n) {
    if (n > 1) {
        sum(n >> 1);
    }
    printf("%d", n & 1);
}

int main() {
    int add = 4 + 5;
    sum(add);
    printf("\n");
    
    return 0;
}