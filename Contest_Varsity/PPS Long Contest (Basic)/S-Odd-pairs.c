#include<stdio.h>
int main(){
    int T;
    scanf("%d", &T);
    long long N;
    int i;
    for(i = 0; i < T; i++){
        scanf("%lld", &N);

        long long num1 = (N + 1) / 2;
        long long num2 = N /2;

        printf("%lld\n", num1 * num2 * 2);
    }

    return 0;
}