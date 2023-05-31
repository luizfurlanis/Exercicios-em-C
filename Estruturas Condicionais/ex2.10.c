#include <stdio.h>
#include <stdlib.h>

int main (){

    float a;
    float b;
    float c;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    if(a >= b + c){
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    }
    else if(a == b && a == c){
        printf("Triangulo EQUILATERO");
    }

    else if( a == c && a != b){
        printf("Triangulo ISOSCELES");
    }

    else if(c != b && a != c){
        printf ("Triangulo ESCALENO");
    }
    if(a >= b + c){
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    }

return 0;
}