#include <stdio.h>
#include <stdlib.h>

int main () {

float largura;
float altura;
float area;
float perimetro;

printf("Valor da Altura:");
scanf("%f" , &altura);

printf("Valor da Largura");
scanf("%f" , &largura);

area = largura * altura;
perimetro = 2 * largura + 2 * altura;

printf("Perimetro = %.2f\n" , perimetro);
printf("Area = %.2f" , area);
return 0;
}