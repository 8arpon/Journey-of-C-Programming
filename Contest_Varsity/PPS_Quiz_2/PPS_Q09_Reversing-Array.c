#include<stdio.h>
int main(){
    int n;
    printf("Write how many element in array you want?: ");
    scanf("%d", &n);
    int array[n];
    int i;
    for(i = 0; i < n; i++){
        printf("Enter a number: ");
        scanf("%d", &array[i]);
    }
    printf("The reversed Array is: ");
    for(i = n - 1; i >= 0; i--){
        printf("%d ", array[i]);
    }


    return 0;
}