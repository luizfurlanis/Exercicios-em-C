#include <stdio.h>
#include <stdlib.h>

int main (){

    float saldoini = 0;
    float valor;
    int opc = 0;

    printf("Saldo inicial: ");
    scanf("%f", &saldoini);

    printf("Operacoes:\n");
    printf("\t1) Deposito;\n");
    printf("\t2) Saque;\n");
    printf("\t3) Fim.\n");

    while(opc < 3){
        
        printf("Operacao desejada: ");
        scanf(" %d", &opc);
        
        if(opc == 1){
            printf("Valor a depositar: ");
            scanf("%f", &valor);
            saldoini = saldoini + valor;
        }
        if(opc == 2){
            printf("Valor a sacar: ");
            scanf("%f", &valor);
            saldoini = saldoini - valor;
        }
    }
    if(opc <= 3 && opc > 0){
    if(saldoini > 0){
        printf("Saldo final: R$%.2f\n", saldoini);
        printf("Conta preferencial.");
    }
    if(saldoini == 0){
        printf("Saldo final: R$%.2f\n", saldoini);
        printf("Sem saldo.");
    }
    if(saldoini < 0){
        saldoini = -1 * saldoini;
        printf("Saldo final: -R$%.2f\n", saldoini);
        printf("Conta devedora.");
    }
    }else{
        printf("Operacao invalida.");
    }
}
