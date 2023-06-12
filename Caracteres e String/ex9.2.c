#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main (){
    char str[50];
    int soma = 0;

    printf("Sentenca: ");
    scanf("%s", str);

    for(int i = str[0]; str[i] != '\0'; i++){
        soma++;
    }

    printf("Primeiro caractere: %c\nUltimo caractere: %c\nNumero de caracteres: %d", str[0], str[soma], soma);
}