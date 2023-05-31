#include <stdio.h>
#include <stdlib.h>

int buscar(const int *a, int n);
int main(){

    int a[10];
    int num; 

    for(int i = 0; i < 10; i++){
        printf("n[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Buscar por: ");
    scanf("%d", &num);

    printf("O valor %d foi encontrado na posicao %d.", num, buscar( &a, num));
    return 0;
}

int buscar(const int *a, int n){

    for(int i = 0; i < 10; i++){
        if(n == a[i]){
            return i;
        }
    }
    return -1;
}