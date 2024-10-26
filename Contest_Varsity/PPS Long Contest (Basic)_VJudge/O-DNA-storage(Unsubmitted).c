#include<stdio.h>
int main(){
    int T;
    int N, S;
    int dna;
    scanf("%d", &T);
    int i;
    for(i = 0; i < T; i++){
        scanf("%d", &N);
        int dnaArr[N];
        if(N % 2 == 0){
            for(int j = 0; j < N; j++){
                scanf("%d", &dna);
            }

            for(int k = 0; k < N; k++){
                
                if(dna == 0 && dna == 0){
                    printf("A");
                }
                if(dna == 1 && dna == 1){
                    printf("G");
                }
                if(dna == 0 && dna == 1){
                    printf("T");
                }
                if(dna == 1 && dna == 0){
                    printf("C");
                }
            }

            printf("\n");


        }
        else{
            printf("Please enter an even number.\n");
        }
    }


    return 0;
}