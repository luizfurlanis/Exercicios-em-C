#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[30] = "ola, como vai, tudo bem?";
    int tamanho = strlen(string);

    printf("%s\n", string);
    printf("Primeiro caractere: %c\n", string[0]);
    printf("Ultimo caractere: %c\n", string[tamanho - 1]);
    printf("Numero de caracteres: %d", tamanho);

    return 0;
}