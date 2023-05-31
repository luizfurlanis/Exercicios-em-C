#include <stdio.h>
#include <stdlib.h>

int main(){

    int perimetro;
    int area;
    int lado;

    printf("tamanho do lado");
    scanf("%d", &lado);
    
    area = lado * lado;
    perimetro = 4 * lado;

    printf("Perimetro = %d\n" , perimetro);
    printf("Area = %d" , area);
    return 0;
}