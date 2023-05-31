#include <stdio.h>
#include <stdlib.h>

int main (){

    int n1;
    int n2;
    int temp;
    int somatorio = 0;

    printf("N1:");
    scanf("%d", &n1);

    printf("N2:");
    scanf("%d", &n2);

    if(n2 < n1){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    for(int i = n1; i <= n2; i++){
        somatorio = somatorio + i;
    }
    printf("Somatorio entre %d e %d: %d", n1, n2, somatorio);

    return 0;
}