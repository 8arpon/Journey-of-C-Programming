#include<stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int sum = 0;
    int change;
    if(num2 < num1){
        change = num1;
        num1 = num2;
        num2 = change;
    }
    while(num1 + 1 < num2){
        if(num1 % 2 != 0){
            sum = num1 + sum;
        }
        num1++;
    }
    printf("%d\n", sum);

    return 0;
}