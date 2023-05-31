#include <stdio.h>
#include <stdlib.h>

int lePositivo ();
int somatorio (int n);

int main (){

    int n[5];

    for(int i = 0; i < 5; i++){
        do{
            printf("n[%d]: ", i);
            scanf("%d", &n[i]);
            if(n[i] < 0){
                lePositivo();
                scanf("%d", &n[i]);
            }
        }while(n[i] < 0);
    }
    for(int i = 0; i < 5; i++){
        printf("Somatorio de 1 a %d: %d\n", n[i], somatorio(n[i]));
    }
    return 0;
}

int lePositivo(){
    printf("Entre com um valor positivo: ");
}

int somatorio(int n){
    int somar;
    for(int i = 1; i <= n; i++ ){
        somar = somar + i;
    }
    return somar;
}