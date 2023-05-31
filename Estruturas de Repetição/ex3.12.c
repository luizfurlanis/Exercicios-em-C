#include <stdio.h>
#include <stdlib.h>

int main (){

    int n1;
    int n2;
    int quant = 0;
    int temp;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    if(n2 < n1){
        temp = n2;
        n2 = n1;
        n1 = temp;
    }
    for(int i = n1; i <= n2; i++){
        if(i % 2 == 0){
        quant++;
        }
    }
    printf("Numeros pares entre %d e %d: %d", n1, n2, quant);
    return 0;
}
