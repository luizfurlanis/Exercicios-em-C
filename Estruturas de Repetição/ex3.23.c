#include <stdio.h>
#include <stdlib.h>

int main (){

    float media;
    float nota;
    float soma;

    for(int i = 1; i <= 10; i++){
        printf("Nota %02d:", i);
        scanf("%f", &nota);
        soma = soma + nota;
    }
    media = soma / 10;
    printf("A media aritmetica das dez notas e: %.2f", media);

    return 0;
}