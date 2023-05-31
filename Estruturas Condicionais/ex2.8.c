#include <stdio.h>
#include <stdlib.h>

int main () { 

float n1;
float n2;
float n3;
float somar;

printf("N1: ");
scanf("%f", &n1);

printf("N2: ");
scanf("%f", &n2);

printf("N3: ");
scanf("%f", &n3);

if (n1>n2 && n1>n3){
    if(n2>n3){
        
        somar=n1+n2;

        printf("A soma dos dois numeros maiores fornecidos e %.2f", somar);

    }else{

        somar=n1+n3;

        printf("A soma dos dois numeros maiores fornecidos e %.2f", somar);
         }
    }

if (n2>n1 && n2>n3){
    if(n1>n3){

        somar=n2+n1;

        printf("A soma dos dois numeros maiores fornecidos e %.2f", somar);
    }else{

        somar=n2+n3;

        printf("A soma dos dois numeros maiores fornecidos e %.2f", somar);
    }
}

if (n3>=n1 && n3>=n2){
    if(n1>n2){

        somar=n3+n1;

        printf("A soma dos dois numeros maiores fornecidos e %.2f", somar);
    }else{

        somar=n2+n3;

        printf("A soma dos dois numeros maiores fornecidos e %.2f", somar);
    }
}

return 0;
}