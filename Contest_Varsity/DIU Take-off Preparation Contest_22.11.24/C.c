#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    int check = 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n; i++) {
        if (ar[i] % 2 == 0) {
            if (ar[i] % 3 != 0 && ar[i] % 5 != 0) {
                check = 0;
                break;
            }
        }
    }

    if (check){
        printf("APPROVED\n");
    } else {
        printf("DENIED\n");
    }

    return 0;
}