#include<stdio.h>
int main(){
    int w;
    scanf("%d", &w);
    if(w <= 100 && w >= 0){
        if(w % 2 == 0 && w >= 4){
                printf("YES\n");
            }
        
        else{
            printf("NO\n");
        }x
    }
    else{
        printf("Please enter any digit from 0 to 100 only.\n");
    }



    return 0;
}