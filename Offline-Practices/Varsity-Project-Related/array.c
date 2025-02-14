#include<stdio.h>
#define nl printf("\n");

int arr[100];
void search(int arr[], int count, int value){
    for(int i = 0; i < count; i++){
        if(arr[i] == value){
            printf("The index of your number: %d\n", i + 1);
        }
    }
}
void traverse(int arr, int count){
    for(int i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }
    nl
}
int main(void){
    int count = 0;
    int arr[100] = {1, 2, 3, 4, 5, 6, 7,  8 , 9};
    
    for(int i = 0; i < 100; i++){
        if(arr[i] == '\0'){
            break;
        }
        count++;
    }
    
    traverse(arr, count);
    search(arr, count, 3);
    
    return 0;
}
