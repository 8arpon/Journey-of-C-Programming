#include<stdio.h>
int main(){
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    int tempVar;
    tempVar = number1;
    number1 = number2;
    number2 = tempVar;
    printf("%d %d", number1, number2);


    return 0;
}