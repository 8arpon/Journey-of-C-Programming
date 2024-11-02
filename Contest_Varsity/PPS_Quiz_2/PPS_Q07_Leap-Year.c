#include<stdio.h>
int main(){
    int n;
    printf("Enter a year to check Leap year or not: ");
    scanf("%d", &n);
    if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)){
        printf("It's a Leap Year.\n");
    }
    else{
        printf("It's not a Leap Year.\n");
    }

    return 0;
}