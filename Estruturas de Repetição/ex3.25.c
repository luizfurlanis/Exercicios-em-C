#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero = 0;
    float soma = 0;
    float media;
    int quantidade = -1;

    while(numero >= 0){
        printf("entre com um valor: ");
        scanf("%d", &numero);
        quantidade++;

        if(numero >= 0){
            soma = soma + numero;
            media = soma / (quantidade + 1);
        }
    }
    printf("Somatorio: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Quantidade: %d", quantidade);

    return 0;
}