#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int sum = 0;
    while(num > 0){
        sum = sum + (num % 10);
        num = num / 10;
    }
    
    int i, add = 0;
    for(i = 2; i < num; i++){
        if(num % i == 0){
            add++;
        }
    }
    
    int add2 = 0;
    for(i = 2; i < sum; i++){
        if(sum % i == 0){
            add2++;
        }
    }

    if(add == 0 && add2 == 0){
        printf("Freedom!\n");
    }
    else{
        printf("Bad luck!\n");
    }


    return 0;
}