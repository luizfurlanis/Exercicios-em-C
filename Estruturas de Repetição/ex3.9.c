#include <stdio.h>
#include <stdlib.h>

int main (){

    int numero;
    int resp;

    printf("Tabuada do Numero:");
    scanf("%d", &numero);

    for(int i = 0;i <= 10;i++){
        resp = numero * i;
        printf("%d x %d = %d\n", numero, i, resp);
    }
    return 0;
}