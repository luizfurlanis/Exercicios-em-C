#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float a;
    float b;
    float c;
    float delta;
    float solucao1;
    float solucao2;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - (4 * a * c);
    solucao1 = (-b - sqrt(delta)) / (2 * a);
    solucao2 = (-b + sqrt(delta)) / (2 * a);

    if(a == 0){

        printf("Nao existe equacao do segundo grau!");

    }else if(delta < 0){

        printf("Delta: %.2f\n", delta);
        printf("S = {}");
        
    }else if(solucao1 != solucao2){

        printf("Delta: %.2f\n", delta);
        printf("S = {%.2f, %.2f}", solucao1, solucao2);

    }else if(solucao1 == solucao2){

        printf("Delta: %.2f\n", delta);
        printf("S = {%.2f}", solucao1);
    }
    return 0;
}