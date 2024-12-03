#include <stdio.h>
#include<math.h>

int main(){
   
    int number;
    scanf("%d",&number);
   
    if (pow(2,number) > number * number){
        printf("Yes");
    }
    else {
        printf("No");
    }

    
    return 0;
}