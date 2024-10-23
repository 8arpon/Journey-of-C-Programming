#include<stdio.h>
int main(){
    int P1, P2, P3, P4;
    int a = 0;

    scanf("%d %d %d %d", &P1, &P2, &P3, &P4);
    
    if(P1 >= 1 && P1 <= 100 && P2 >= 1 && P2 <= 100 && P3 >= 1 && P3 <= 100 && P4 >= 1 && P4 <= 100){       
        if(P1 >= 10){
            a++;
        }
        if(P2 >= 10){
            a++;
        }
        if(P3 >= 10){
            a++;
        }
        if(P4 >= 10){
            a++;
        }
    }
    else{
        printf("Sorry! This code has been rejected by the Author _ Arpon Sarker.");
    }

    printf("%d\n", a);

    return 0;
}