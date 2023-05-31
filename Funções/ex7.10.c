#include <stdio.h>
#include <stdlib.h>

int calculaDigito(int n);


int main(){
    int n;

    printf("Numero: ");
    scanf("%d", &n);

    if(n >= 1 && n <= 9999){
        printf("Digito verificador de %d: %d", n, calculaDigito(n));
    }

return 0;
}

int calculaDigito(int n){
    int milhar;
    int centena;
    int dezena;
    int unidade;
    int soma;

    milhar = n / 1000;
    n = n % 1000;
    centena = n / 100;
    n = n % 100;
    dezena = n / 10;
    unidade = n % 10;

    soma = 2 * unidade + 3 * dezena + 4 * centena + 5 * milhar;
    soma = soma % 11;
    soma = 11 - soma;
    if(soma >= 10){
        return 0;
    }
    return soma;
}