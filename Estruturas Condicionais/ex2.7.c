#include <stdio.h>
#include <stdlib.h>

int main () {

    float num1;
    float num2;
    float sub;

    printf("Entre com um numero:");
    scanf("%f", &num1);

    printf("Entre com outro numero:");
    scanf("%f", &num2 );

    if( num1 + num2 > 10){

        printf("Os numeros fornecidos foram %.2f e %.2f", num1, num2);
    }else {

        sub = num1 - num2;
        printf("A subtracao entre %.2f e %.2f e igual a %.2f", num1, num2, sub);
    }
    return 0;
}