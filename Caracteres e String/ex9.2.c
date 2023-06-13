#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main (){
    char str[50];
    int soma = 0;

    printf("Sentenca: ");
    fgets(str,50,stdin);

    for(int i = 0; str[i] != '\0'; i++){
        soma++;
    }

    printf("Primeiro caractere: %c\nUltimo caractere: %c\nNumero de caracteres: %d", str[0], str[soma - 2], soma);
}