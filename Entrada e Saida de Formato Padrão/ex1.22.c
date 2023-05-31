#include <stdio.h>
#include <stdlib.h>

int main (){

    float p;
    float pdesconto;

    printf("Valor do Produto:");
    scanf("%f" , &p);

    pdesconto = p * 91 / 100;

    printf("Preco de venda com 9%% de desconto: %.2f" , pdesconto);
    return 0;



}