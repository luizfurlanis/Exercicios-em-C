#include <stdio.h>
#include <stdlib.h>

int main (){

    int ninteiro;
    int sucessor;
    int antecessor;

    printf("Forneça um numero inteiro:");
    scanf("%d" , &ninteiro);

    sucessor = ninteiro + 1;
    antecessor = ninteiro - 1;

    printf("Sucessor de %d: %d\n" , ninteiro , sucessor);
    printf("Antecessor de %d: %d\n" , ninteiro , antecessor);
    return 0;

}