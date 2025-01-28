#include<stdio.h>
int count = 0;
void search(int arr[], int num){
    int test = 0;
    for(int i = 0; i < count; i++){
        if(arr[i] == num){
            printf("Number found!\n");
            printf("The number is: %d and the position of the number is: %d\n", arr[i], i + 1);
            test = 1;
        }
    }
    if(test == 0){
        printf("Number not found!\n");
    }
}
void traverse(int arr[]){
    for(int i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(void){
    int arr[100] = {18, 8, 7, 5, 10, 17};
    for(int i = 0; i < 100; i++){
        if(arr[i] == '\0'){
            break;
        }
        else{
            count++;
        }
    }
    traverse(arr);
    search(arr, 8);

    return 0;
}