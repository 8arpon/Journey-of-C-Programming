#include<stdio.h>
int main(){
    int T, X, Y;
    int i;
    scanf("%d", &T);

    if(1 <= T && T <= 1000){

        for(i = 0; i < T; i++){
            scanf("%d %d", &X, &Y);
            int total = (10 * X) + (90 * Y);
            if(Y >= 1 && Y <= 1000 && X <= 1000 && X >= 1){
                printf("%d\n", total);
            }
            else{
                printf("Sorry! Rejected by the Author (Arpon) due to invalid syntax\n");
            }

        }


    }


    return 0;
}