#include<stdio.h>
int main(){
    int a, b = 7;
    //scanf("%d %d", &a, &b);
    a = 5;
    int *ptr1, *ptr2;
    
    ptr1 = &a;

    printf("%d", &a);
    printf("%d", ptr1);


    return 0;
}