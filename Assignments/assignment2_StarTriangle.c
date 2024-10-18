/*
Sample input: 5
Sample Output:

*
**
***
****
*****

*/


#include<stdio.h>
int main(){
    int a;
    printf("Enter the number you want to print the pattern: ");
    scanf("%d", &a);

    int i = 1, j;
    while(a >= i){
        for(j = 1; j <= i; j++){
            printf("*");
        }

        printf("\n");
        i += 1;
    }


    return 0;
}