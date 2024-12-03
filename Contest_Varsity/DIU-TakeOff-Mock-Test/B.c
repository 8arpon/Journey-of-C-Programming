#include<stdio.h>
int main()
{
    int date;
    scanf("%d", &date);
    if(date == 5 || date == 6 || date == 12 || date == 13 || date == 19 || date == 20 || date == 16 || date == 27){
        printf("YAPPY!!!\n");
    }
    else{
        printf("Oh no!\n");
    }

    return 0;
}