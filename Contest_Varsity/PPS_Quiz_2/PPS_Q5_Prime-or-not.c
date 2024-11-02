#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int i, add = 0;
    for(i = 2; i < n; i++){
        if(n % i == 0){
            add++;
        }
    }
    if(add != 0){
        printf("It's not a Prime number.\n");
    }
    else{
        printf("It's a Prime number.\n");
    }

    return 0;
}