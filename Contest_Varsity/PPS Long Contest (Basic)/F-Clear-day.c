#include<stdio.h>
int main(){
    int rainyDays, cloudyDays;
    scanf("%d %d", &rainyDays, &cloudyDays);

    int clearDays = 7 - rainyDays - cloudyDays;

    if(rainyDays + cloudyDays <= 7 && rainyDays + clearDays >= 0 && rainyDays <= 7 && cloudyDays <= 7 && rainyDays >= 0 && cloudyDays >= 0){
        printf("%d\n", clearDays);
    }
    else{
        printf("Invalid.\n");
    }


    return 0;
}