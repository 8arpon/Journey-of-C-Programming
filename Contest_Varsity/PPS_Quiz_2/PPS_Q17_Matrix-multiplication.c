#include<stdio.h>

int main(){
    int a, b;
    printf("Enter row and column: ");
    scanf("%d %d", &a, &b);

    int matA[a][b], matB[b][a], matM[a][b];

    int i, j;
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("Matrix A[%d][%d] = ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    for(i = 0; i < b; i++){
        for(j = 0; j < a; j++){
            printf("Matrix B[%d][%d] = ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            matM[i][j] = 0;
            for(int k = 0; k < b; k++){
                matM[i][j] += matA[i][k] * matB[k][j]; 
            }
        }
    }

    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("%d ", matM[i][j]);
        }
        printf("\n");
    }

    return 0;
}