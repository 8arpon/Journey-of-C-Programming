#include<stdio.h>
int main(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    int s = 0;
    while(a <= b){
        s = s + a;

        a++;
    }
    printf("%d\n", s);

    return 0;
}