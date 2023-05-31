#include <stdio.h>
#include <stdlib.h>

int main(){

    float diametro;
    float circunferencia;
    float area;
    float raio;

    printf("Valor do Raio:");
    scanf("%f" , &raio);

    diametro = 2 * raio;
    area = 3.141592 * raio * raio;
    circunferencia = 2 * raio * 3.141592;

    printf("Diametro = %.2f\n" , diametro);
    printf("Circunferencia = %.2f\n" , circunferencia);
    printf("Area = %.2f" , area);
    return 0;

}