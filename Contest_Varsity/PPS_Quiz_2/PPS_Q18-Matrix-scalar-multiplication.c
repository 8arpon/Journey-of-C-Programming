#include<stdio.h>
int main(){
    int a, b;
    printf("Write Row and Column for a Matrix: ");
    scanf("%d %d", &a, &b);
    int matA[a][b], matM[a][b];
    int i, j;
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("Matrix A[%d][%d] = ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    int number;
    printf("Enter a number to multiply the matrix: ");
    scanf("%d", &number);
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            matM[i][j] = number * matA[i][j];
        }
    }
    printf("Multiplication of the matrix: \n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("%d ", matM[i][j]);
        }
        printf("\n");
    }

    return 0;
}