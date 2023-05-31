#include <stdio.h>
#include <stdlib.h>

int main (){

    int base;
    int area;
    int altura;

    printf ("valor da base");
    scanf("%d" , &base);

    printf("valor da altura");
    scanf("%d" , &altura);

    area = base * altura / 2;

    printf("Area = %d" , area);
    return 0;


}