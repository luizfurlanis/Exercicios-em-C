#include <stdio.h>
#include <stdlib.h>

int main (){

    float base;
    float area;
    float altura;

    printf ("valor da base");
    scanf("%f" , &base);

    printf("valor da altura");
    scanf("%f" , &altura);

    area = base * altura / 2;

    printf("Area = %.2f" , area);
    return 0;


}