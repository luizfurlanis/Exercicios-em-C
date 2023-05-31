#include <stdio.h>
#include <stdlib.h>

int main(){

    float primeiro;
    float segundo;
    float adicao;
    float subtracao;
    float multiplicacao;
    float divisao;

    printf("Primeiro Numero:");
    scanf("%f" , &primeiro);

    printf("Segundo Numero:");
    scanf("%f" , & segundo);

    adicao = primeiro + segundo;
    multiplicacao = primeiro * segundo;
    divisao = primeiro / segundo;
    subtracao = primeiro - segundo;

    printf("%.2f + %.2f = %.2f\n", primeiro, segundo, adicao);
    printf("%.2f - %.2f = %.2f\n", primeiro, segundo, subtracao);
    printf("%.2f * %.2f = %.2f\n", primeiro, segundo, multiplicacao);
    printf("%.2f / %.2f = %.2f\n", primeiro, segundo, divisao);

    return 0;



}