#include<stdio.h>
int main(){
    int T;
    scanf("%d", &T);
    float X, Y;
    int i;

    if(T >= 1 && T <= 20000){
        for(i = 0; i < T; i++){
            scanf("%f %f", &X, &Y);

            float ultNum = X * 1.07;
            if(X >= 1 && X <= Y && Y <= 200){
                if(Y > ultNum){
                    printf("NO\n");
                }
                else{
                    printf("YES\n");
                }

            }
            else{
                printf("Sorry! Your input is rejected by the Author - Arpon Sarker due to some limitations.\n");
            }

        }


    }


    return 0;
}