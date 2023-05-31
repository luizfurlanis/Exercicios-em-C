#include <stdio.h>
#include <stdlib.h>

int main(){

    float perimetro;
    float area;
    float lado;

    printf("tamanho do lado");
    scanf("%f", &lado);
    
    area = lado * lado;
    perimetro = 4 * lado;

    printf("Perimetro = %.2f\n" , perimetro);
    printf("Area = %.2f" , area);
    return 0;
}