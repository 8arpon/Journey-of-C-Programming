#include<stdio.h>
int main(){
    int T;
    scanf("%d", &T);
    int A, B, C;
    int i;
    if(T >= 1 && T <= 100){
        for(i = 0; i < T; i++){
            scanf("%d %d %d", &A, &B, &C);

            if(1 <= A && A <= B && B <= C && C <= 10 && C < (A + B)){
                if(A == B || B == C || A == C){
                    printf("No\n");
                }
                else{
                    printf("Yes\n");
                }

            }
            else{
                printf("Sorry! Invalid input detected.");

            }

        }


    }

    else{
        printf("Sorry! Out of the condtion is blocked by the Author - Arpon Sarker.\n");
    }


    return 0;
}