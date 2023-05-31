#include <stdio.h>
#include <stdlib.h>

int main (){

    int numero;
    int maiorNumero;
    int menorNumero;

    while(numero >= 0){
        printf("Entre com um valor: ");
        scanf("%d", &numero);
        if(numero >= 0){
            if(maiorNumero <= numero){
                maiorNumero = numero;
            }   
            if(menorNumero >= numero){
                menorNumero = numero;
            } 
        }else if(maiorNumero == 0){
            menorNumero = 0;
        }
    }
    printf("Menor numero: %d\n", menorNumero);
    printf("Maior numero: %d", maiorNumero);

    return 0;
}