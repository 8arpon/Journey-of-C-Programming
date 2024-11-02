#include<stdio.h>
int main(){
    int m, n;
    printf("Write the Rows and Coloumn of the Matrix: ");
    scanf("%d %d", &m, &n);
    int matA[m][n];
    int matB[m][n];
    int matSum[m][n];

    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Matrix - A: [%d][%d] ", i + 1, j + 1);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Matrix - B: [%d][%d] ", i + 1, j + 1);
            scanf("%d", &matB[i][j]);
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            matSum[i][j] = matA[i][j] + matB[i][j];
        }
    }
    printf("\n");

    printf("Sum of Matrix A and Matrix B: \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", matSum[i][j]); 
        }
        printf("\n");
    }


    return 0;
}