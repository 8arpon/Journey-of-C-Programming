#include<stdio.h>
int main(){
    int array[] = {18, 7, 10, 11, 8, 15, 17};

    int sizeArray = sizeof(array) / sizeof(array[0]);
    printf("%d\n", sizeArray);

    return 0;
}