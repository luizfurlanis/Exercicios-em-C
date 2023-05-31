#include <stdio.h>
#include <stdlib.h>

    int main(){
        int numPrimeiro;
        int numSegundo;
        int adicao;
        int multiplicacao;
        int subtracao;
        int divisao;

        printf("primeiro numero");
        scanf("%d" , &numPrimeiro);

        printf("segundo numero");
        scanf("%d" , &numSegundo);

        adicao = numPrimeiro + numSegundo;
        multiplicacao = numPrimeiro * numSegundo;
        divisao = numPrimeiro / numSegundo;
        subtracao = numPrimeiro - numSegundo;

        printf("%d + %d = %d\n", numPrimeiro, numSegundo, adicao);
        printf("%d - %d = %d\n", numPrimeiro, numSegundo, subtracao);
        printf("%d * %d = %d\n", numPrimeiro, numSegundo, multiplicacao);
        printf("%d / %d = %d\n", numPrimeiro, numSegundo, divisao);

        return 0;
    }