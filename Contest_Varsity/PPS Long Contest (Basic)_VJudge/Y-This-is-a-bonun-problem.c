#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        int c[11] = {0};

        for (int j = 0; j < N; j++) {
            int A;
            scanf("%d", &A);
            c[A]++;
        }

        int maxC = 0, laptop = -1, maxL = 0;
        for (int k = 1; k <= 10; k++) {
            if (c[k] > maxC) {
                maxC = c[k];
                laptop = k;
                maxL = 1;
            } 
            else if (c[k] == maxC) {
                maxL++;
            }
        }

        if (maxL > 1) {
            printf("CONFUSED\n");
        }
        else {
            printf("%d\n", laptop);
        }
    }

    return 0;
}
