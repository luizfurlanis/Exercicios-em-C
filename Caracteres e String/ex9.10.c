#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char str[50];
    int n;

    printf("Frase: ");
    gets(str);

    n = strlen(str);

    printf("%d caractere(s)", n);
}