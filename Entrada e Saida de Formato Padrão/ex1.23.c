#include <stdio.h>
#include <stdlib.h>

int main (){

    int nascimento;
    int atual;
    int idade;

    printf("Ano de Nascimento:");
    scanf("%d" , &nascimento);

    printf("Ano Atual:");
    scanf("%d" , &atual);

    idade = atual - nascimento;

    printf("Idade aproximada: %d anos" , idade);
    return 0;
}