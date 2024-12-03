#include<stdio.h>
#include<math.h>

int main() {
    int n;
    scanf("%lf", &n);


    int power1 = pow(2, n);
    int power2 = n * n;

    if (power1 > power2){
        printf("YES\n");
    } 
    else{
        printf("NO\n");
    }

    return 0;
}