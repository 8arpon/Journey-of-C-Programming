#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int i;
    for(i = 2; i < n; i++){
        if(n % i == 0){
            printf("It's not prime number.\n");
            break;
        }
        else if(n % i != 0){
            printf("It's a prime number.\n");
            break;
        }
    }

    return 0;
}