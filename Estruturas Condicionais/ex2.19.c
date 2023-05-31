#include <stdio.h>
#include <stdlib.h>

int main (){

    char opc;
    float temp;
    float resp;

    printf("Escolha uma operacao de acordo com o menu:\n");
    printf("    C) Celsius -> Fahrenheit.\n");
    printf("    F) Fahrenheit -> Celsius.\n");
    printf("Opcao:");
    scanf(" %c", &opc);

    switch (opc){
        case 'C':
        printf("\nEntre com a temperatura em graus Celsius:");
        scanf("%f", &temp);
        resp = (1.8 * temp) + 32;
        printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", temp, resp);
        break;
        case 'F':
        printf("\nEntre com a temperatura em graus Fahrenheit:");
        scanf("%f", &temp);
        resp = (temp - 32)/1.8;
        printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", temp, resp);
        break;
        default:
        printf("Opcao invalida!");
        break;
    }
}