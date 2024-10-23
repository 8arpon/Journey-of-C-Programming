#include<stdio.h>
int main(){
    printf("How many Arrays you want to create: ");
    int numArr;
    scanf("%d", &numArr);
    printf("How many content you want to add: ");
    int contArr;
    scanf("%d", &contArr);

    int arr[numArr][contArr];

    int i, j;
    for(i = 0; i < numArr; i++){
        for(j = 0; j < contArr; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Printing the contents of Array: \n");
    for(i = 0; i < numArr; i++){
        for(j = 0; j < contArr; j++){
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}