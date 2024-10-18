#include<stdio.h>
int main(){
    int n;
    printf("How many contents on a array you want to store: ");
    scanf("%d", &n);

    int arr[n];
    int i;
    for(i = 1; i <= n; i++){
        if(i == 1){
            printf("Enter the %dst number: ", i);
        }
        else if(i == 2){
            printf("Enter the %dnd number: ", i);
        }
        else if(i == 3){
            printf("Enter the %drd number: ", i);
        }
        else{
            printf("Enter the %dth number: ", i);
        }

        scanf("%d", &arr[i]);
    }

    for(i = 1; i <= n; i++){
        if(i == 1){
            printf("The %dst number is:  %d\n", i,  arr[i]);
        }
        else if(i == 2){
            printf("The %dnd number is:  %d\n", i,  arr[i]);
        }
        else if(i == 3){
            printf("The %drd number is:  %d\n", i,  arr[i]);
        }
        else{
            printf("The %dth number is:  %d\n", i,  arr[i]);
        }

    }



    return 0;
}