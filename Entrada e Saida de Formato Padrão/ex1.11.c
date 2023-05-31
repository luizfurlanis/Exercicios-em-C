#include <stdio.h>
#include <stdlib.h>

int main() {
    int diagonalMaior;
    int diagonalMenor;
    int area;

    printf("Valor da Diagonal Maior:");
    scanf("%d" , &diagonalMaior);

    printf("Valor da Diagonal Menor:");
    scanf("%d" , &diagonalMenor);

    area = diagonalMaior * diagonalMenor / 2;

    printf("Area = %d" , area);

}