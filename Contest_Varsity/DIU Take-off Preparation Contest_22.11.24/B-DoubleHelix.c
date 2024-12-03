#include<stdio.h>
int main()
{
    char dna;
    scanf(" %c", &dna);
    if(dna == 'A'){
        printf("T\n");
    }
    else if(dna == 'G'){
        printf("C\n");
    }
    else if(dna == 'T'){
        printf("A\n");
    }
    else if(dna == 'C'){
        printf("G\n");
    }
    else{
        printf("Invalid\n");
    }
    

    return 0;
}