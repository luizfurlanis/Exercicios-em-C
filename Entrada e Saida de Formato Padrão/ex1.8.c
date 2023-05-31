#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int largura;
    int altura;
    int area;
    int perimetro;

    printf("valor da largura");
    scanf("%d", &largura);

    printf("valor da altura");
    scanf("%d", &altura);

    perimetro = 2 * largura + 2 * altura;
    area = largura * altura;

    printf("Perimetro = %d\n" , perimetro);
    printf("Area = %d" , area);
    return 0;




}