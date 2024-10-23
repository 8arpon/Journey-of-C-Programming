#include<stdio.h>
int main(){
    int T;
    int X, N;
    scanf("%d", &T);
    int i;
    if(T >= 1 && T <= 100){

        for(i = 0; i < T; i++){
        scanf("%d %d", &X, &N);

        int result = (X / 10) * N;
        
        if(X >= 10 && X <= 200 && N >= 0 && N <= 10){
            printf("%d\n", result);

        }
    }

    }


    return 0;
}