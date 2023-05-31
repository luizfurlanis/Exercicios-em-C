#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso;
    int i = 1;
    float media;
    float soma = 0;
    float pessoaPesada;
    int j =1;

    while(peso >= 0){
        printf("Entre com o peso da pessoa %02d:", i);
        scanf("%f", &peso);
        if(peso > 60){
            soma = soma + peso;
            media = soma / j;
            j++;
        }
        if(pessoaPesada <= peso){
            pessoaPesada = peso;
        }
        i++;
    }
    printf("Media dos pesos acima de 60kg: %.2f\n", media);
    printf("A pessoa mais pesada possui %.2fkg", pessoaPesada);

    return 0;

}