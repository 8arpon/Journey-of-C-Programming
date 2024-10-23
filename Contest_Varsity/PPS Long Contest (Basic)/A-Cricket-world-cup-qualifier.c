#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n >= 12 && n <= 20){
        printf("yes\n");
    }
    else if(n <= 12 && n >= 1){
        printf("no\n");
    }
    else{
        printf("Invalid\n");
    }


    return 0;
}