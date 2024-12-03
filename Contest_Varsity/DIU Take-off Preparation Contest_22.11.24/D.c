#include<stdio.h>
int main()
{
    double n;
    scanf("%lf", &n);
    int i;

    
   
    double mult = 1;
    for(i = 0; i < n; i++){
        mult = 2 * mult;
    }    
    double mult2 = n * n;
    if(mult > mult2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}