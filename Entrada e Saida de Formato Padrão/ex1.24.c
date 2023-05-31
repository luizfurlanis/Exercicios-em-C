#include <stdio.h>
#include <stdlib.h>

int main (){

    float v;
    int q;
    float p;
    float s;

    printf("Valor da hora/aula:\n");
    scanf("%f" , &v);

    printf("Quantidade de aulas:\n");
    scanf("%d" , &q);

    printf("Porcentagem de desconto INSS:\n");
    scanf("%f" , &p);

    s = (v * q) - (v * q) * (p/100);

    printf("Salario Liquido: %.2f" , s);
    return 0;
}