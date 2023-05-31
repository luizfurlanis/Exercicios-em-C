#include <stdio.h>
#include <stdlib.h>

int lePositivo();
int somaDivisores(int n);

int main(){
    int array[5];

    for(int i = 0; i < 5; i++){
        printf("n(%d): ", i);
        array[i] = lePositivo();
    }

    for(int i = 0; i < 5; i++){
        somaDivisores(array[i]);
    }

}

int lePositivo(){
    int n;
        do{
            scanf("%d", &n);
            if(n < 0){
                printf("Entre com um valor positivo: ");
            }
        }while(n < 0);
        return n;
}

int somaDivisores(int n){
    int soma = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            soma += i;
        }
    }
    printf("Soma dos divisores de %d: %d\n", n, soma);

    return soma;
}