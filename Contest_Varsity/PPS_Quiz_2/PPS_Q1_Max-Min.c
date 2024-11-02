#include<stdio.h>
int main(){
    int n;
    printf("Enter how many value do you want to add in an array: ");
    scanf("%d", &n);
    int array[n];

    int i;
    for(i = 0; i < n; i++){
        printf("Enter the value: ");
        scanf("%d", &array[i]);
    }

    int maxNumber = array[0];
    int minNumber = array[0];
    for(i = 1; i < n; i++){
        if(maxNumber < array[i]){
            maxNumber = array[i];
        }
        if(minNumber > array[i]){
            minNumber = array[i];
        }
    }

    printf("The Maximum value of the Array is %d\n", maxNumber);
    printf("The Minimun value of the Array is %d\n", minNumber);


    return 0;
}