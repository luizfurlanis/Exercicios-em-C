#include <stdio.h>
#include <stdlib.h>

int main (){

    float area;
    float basemaior;
    float basemenor;
    float altura;

    printf("Valor da Base Maior:");
    scanf("%f" , &basemaior);

    printf("Valor da Base Menor:");
    scanf("%f" , &basemenor);

    printf("Valor da Altura:");
    scanf("%f" , &altura);

    area = (basemaior + basemenor) * altura / 2;
     printf("Area = %.2f", area);
     return 0;

}