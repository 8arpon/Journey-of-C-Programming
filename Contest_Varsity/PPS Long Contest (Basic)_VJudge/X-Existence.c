#include<stdio.h>
#include<math.h>

int main(){
    int T;
    long long X;
    long long Y;

    scanf("%d", &T);

    int i;
    if(T <= 1000 && T >= 1){
        for(i = 0; i < T; i++){
            scanf("%lld %lld", &X, &Y);
            if(X >= 1 && X <= 1000000000 && Y >= 1 && Y <= 1000000000000000000LL){
                long long X4 = X * X * X * X;         
                long long Y2 = Y * Y;
                long long firstVar = X4 + 4 * Y2;
                long long secondVar = 4 * X * X * Y; 

                if(firstVar == secondVar){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }



            }


        }



    }
    



    return 0;
}


