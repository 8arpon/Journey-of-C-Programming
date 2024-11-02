#include<stdio.h>
int main(){
    int n; 
    printf("Enter how many number you want?: ");
    scanf("%d", &n);
    int value[n];
    for(int i = 0; i < n; i++){
        printf("Enter a number: ");
        scanf("%d", &value[i]);
    }
    
    int yourValue;
    printf("Write the value wanna get: ");
    scanf("%d", &yourValue);
    int pos = 0;
    for(int i = 0; i < n; i++){
        if(yourValue == value[i]){
            pos = i + 1;
            break;
        }
    }
    if(pos != 0){
        printf("The position of the number: %d\n", pos);
    }
    else if(pos == 0){
        printf("Not Found\n");
    }

    return 0;
}