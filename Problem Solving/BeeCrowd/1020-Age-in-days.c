#include<stdio.h>
int main(){
    int age;
    scanf("%d", &age);
    int y = age / 365;
    int rd = age % 365;
    int m = rd / 30;
    int d = rd % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
    


    return 0;
}