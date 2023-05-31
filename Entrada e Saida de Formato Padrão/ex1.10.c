#include <stdio.h>
#include <stdlib.h>

int main (){

    int area;
    int baseMaior;
    int baseMenor;
    int altura;

    printf("Valor da Base Maior:");
    scanf("%d" , &baseMaior);

    printf("Valor da Base Menor:");
    scanf("%d" , &baseMenor);

    printf("Valor da Altura:");
    scanf("%d" , &altura);

    area = (baseMaior + baseMenor) * altura / 2;
     printf("Area = %d", area);
     return 0;

}