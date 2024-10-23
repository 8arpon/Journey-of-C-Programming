#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        if (X > Y) {
            printf("%d\n", X);
        } else {
            printf("%d\n", Y);
        }
    }
    
    return 0;
}
