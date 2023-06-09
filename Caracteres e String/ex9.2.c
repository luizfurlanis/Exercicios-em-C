#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main (){
    char str[50];

    printf("Sentença: ");
    scanf("%s", str);

    printf("Primeiro caractere: %c\nUltimo caractere: %c\nNumero de caracteres: %d", str[0], str);
}