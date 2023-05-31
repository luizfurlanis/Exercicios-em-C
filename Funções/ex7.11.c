#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool numeroCorreto(int n);
int obtemDigito(int n);
int obtemNumero(int n);
int calculaDigito(int n);

int main(){
    int n;

    printf("Numero: ");
    scanf("%d", &n);

    if(n >= 10 && n <= 99999){
        printf("Numero completo: %d\n", n);
        printf("Numero: %d\n", obtemNumero(n));
        printf("Digito: %d\n", obtemDigito(n));
        printf("Digito calculado: %d\n", calculaDigito(obtemNumero(n)));
        if(numeroCorreto(n)){
            printf("O numero fornecido esta correto!");
        }
        else{
            printf("O numero fornecido esta incorreto!");
        }
    }


return 0;
}

bool numeroCorreto(int n){
    if(calculaDigito(obtemNumero(n)) == obtemDigito(n)){
        return true;
    }
    return false;
}
int obtemDigito(int n){
    int milhar;
    int centena;
    int dezena;
    int unidade;

    milhar = n / 1000;
    n = n % 1000;
    centena = n / 100;
    n = n % 100;
    dezena = n / 10;
    unidade = n % 10;

    return unidade;
}

int obtemNumero(int n){
    int milhar;
    int centena;
    int dezena;
    int unidade;

    milhar = n / 1000;
    n = n % 1000;
    centena = n / 100;
    n = n % 100;
    dezena = n / 10;
    unidade = n % 10;

    int resultado  = (milhar * 1000 + centena * 100 + dezena * 10) / 10;
    
    return resultado;
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
    if(soma == 10 || soma == 11){
        return 0;
    }
    return soma;
}