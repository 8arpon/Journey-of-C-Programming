#include<stdio.h>
int main(){
    int code1, unit1;
    float price1;
    int code2, unit2;
    float price2;
    scanf("%d %d %f", &code1, &unit1, &price1);
    scanf("%d %d %f", &code2, &unit2, &price2);
    
    float pay1 = (float) unit1 * price1;
    float pay2 = (float) unit2 * price2;
    printf("VALOR A PAGAR: R$ %0.2f\n", pay1 + pay2);

    return 0;
}