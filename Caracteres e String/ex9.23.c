#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void imprimirCaixa( const char *str);
int main (){
    char str[100];

    printf("String: ");
    fgets(str,100,stdin);

    imprimirCaixa( str );

    return 0;
}

void imprimirCaixa( const char *str){

    printf("++");
    for(int i = str[0]; str[i] != '\0'; i++){
        printf("=");
    }
    printf("++\n");

    printf("|| %s ||\n", str);

    printf("++");
    for(int i = str[0]; str[i] != '\0'; i++){
        printf("=");
    }
    printf("++");
}