#include <stdio.h>
#include <stdlib.h>

int main (){

    int n1;
    int n2;
    int resp;
    char opc = 'S';

    while(opc == 'S'){

        printf("N1: ");
        scanf("%d", &n1);

        printf("N2: ");
        scanf("%d", &n2);
        
        while(n2 == 0){
            printf("Nao existe divisao inteira por zero!\n");
            printf("Entre novamente com N2: ");
            scanf("%d", &n2);
        }

        resp = n1 / n2;
    printf("%d / %d = %d\n", n1, n2, resp);

        printf("Voce deseja realizar outro calculo? (S/N): ");
        scanf(" %c", &opc);
    }

    return 0;

}