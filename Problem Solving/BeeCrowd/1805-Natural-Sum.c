#include<stdio.h>
int main(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long s = 0;
    while(a <= b){
        s = s + a;
        a++;
    }
    printf("%lld\n", s);

    return 0;
}