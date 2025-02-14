#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int student[n][7];
    int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j < 7; j++){
            scanf("%d", &student[i][j]);
        }
    }

    int max;
    int test;
    for(i = 0; i < n; i++){
        test = 0;
        for(j = 0; j < 7; j++){
            test = test + student[i][j];
        }
        if(test > max){
            max = test;
        }
    }
    printf("%d", max);


    return 0;
}