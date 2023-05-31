#include <stdio.h>
#include <stdlib.h>

int main (){

    float numero;

    printf("entre com um valor qualquer:");
    scanf("%f" , &numero);

    printf("%f\n" , numero);
    printf("%.2f\n" , numero);
    printf("%.3f" , numero);
    return 0;

}