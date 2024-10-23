#include<stdio.h>
int main(){
    int gM, aM, gR, aR;
    scanf("%d %d %d %d", &gM, &aM, &gR, &aR);
    int pM, pR;
    pM = (gM * 2) + aM;
    pR = (gR * 2) + aR;

    if(gM >= 0 && gM <= 100 && aM >= 0 && aM <= 100 && gR >= 0 && gR <= 100 && aR >= 0 && aR <= 100){
        if(pM > pR){
            printf("Messi\n");
        }
        else if(pM < pR){
            printf("Ronaldo\n");
        }
        else if(pM == pR){
            printf("Equal\n");
        }
    }
    else{
        printf("Not a human!\n");
    }


    return 0;
}