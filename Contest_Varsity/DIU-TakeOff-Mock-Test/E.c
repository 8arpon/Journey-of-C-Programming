#include<stdio.h>
int main()
{
    double num;
    scanf("%lf", &num);
    if (num == (int)num)
    {
        printf("Integer\n");
    }
    else
    {
        printf("Float\n");
    }

    return 0;
}