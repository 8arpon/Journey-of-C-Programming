#include<stdio.h>
int main(){
    int T, N;
    scanf("%d", &T);

    int i;
    if(T >= 1 && T <= 10){

        for(i = 0; i < T; i++){
        scanf("%d", &N);

        if(N >= 1 && N <= 10 && N % 2 == 0){
            printf("Yes\n");
        }
        else if(N >= 1 && N <= 10 && N % 2 != 0){
            printf("No\n");
        }
        else{
            printf("Sorry! Rejected by the Author...");
        }

        }

    }
    


    return 0;
}