#include <stdio.h>
#include <stdlib.h>

int main() {
    float diagonalMaior;
    float diagonalMenor;
    float area;

    printf("Valor da Diagonal Maior:");
    scanf("%f" , &diagonalMaior);

    printf("Valor da Diagonal Menor:");
    scanf("%f" , &diagonalMenor);

    area = diagonalMaior * diagonalMenor / 2;

    printf("Area = %.2f" , area);

}
