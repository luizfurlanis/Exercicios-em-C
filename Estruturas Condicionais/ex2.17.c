#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;

    printf("Entre com um valor inteiro:");
    scanf("%d", &n1);

    switch (n1) {
        case 2: n1 = 2;
        printf("O valor fornecido foi %d.", n1);
        break;
        case 4: n1 = 4;
        printf("O valor fornecido foi %d.", n1);
        break;
        case 6: n1 = 6;
        printf("O valor fornecido foi %d.", n1);
        break;
        case 8: n1 = 8;
        printf("O valor fornecido foi %d.", n1);
        break;
        default: 
        printf("Valor invalido.");
        break;
    }
    return 0;
}