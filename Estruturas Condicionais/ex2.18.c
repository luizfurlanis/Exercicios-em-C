#include <stdio.h>
#include <stdlib.h>

int main (){
    
    float n1;
    float n2;
    char operacao;
    float resp;

    printf("N1:");
    scanf("%f", &n1);

    printf("N2:");
    scanf("%f", &n2);

    printf("Escolha uma operacao de acordo com o menu:\n");
    printf("+) Adicao;\n");
    printf("-) Subtracao;\n");
    printf("*) Multiplicacao;\n");
    printf("/) Divisao.\n");
    printf("Operacao: ");
    scanf(" 14%c", &operacao);

    switch(operacao){

        case '+':
        resp = n1 + n2;
        printf("%.2f + %.2f = %.2f", n1, n2, resp);
        break;

        case '-':
        resp = n1 - n2;
        printf("%.2f - %.2f = %.2f", n1, n2, resp);
        break;

        case '*':
        resp = n1 * n2;
        printf("%.2f * %.2f = %.2f", n1, n2, resp);
        break;

        case '/':
        resp = n1 / n2;
        printf("%.2f / %.2f = %.2f", n1, n2, resp);
        break;

        default:
        printf("Opcao invalida!");
    } 

return 0;
}