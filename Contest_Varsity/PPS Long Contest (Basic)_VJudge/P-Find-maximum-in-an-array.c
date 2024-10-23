#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    if(T <= 10 && T >= 1){
        for(int i = 0; i < T; i++){
            int N;
            scanf("%d", &N);

            if(N >= 1 && N <= 100000){
                long long height, maxHeight = 0;

                for(int j = 0; j < N; j++){
                    scanf("%lld", &height);

                    if(height > maxHeight){
                        maxHeight = height;
                    }
                }
                printf("%lld\n", maxHeight);
            }
        }
    }

    return 0;
}