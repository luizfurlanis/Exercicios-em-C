#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1;
    float resp;

    printf("Entre com um valor:");
    scanf("%f", &n1);

    if(n1 > 20){

        resp = n1 / 2;

        printf("A metade de %.2f e %.2f", n1, resp);

    }else{

        resp = n1 * 3;
        printf("O triplo de %.2f e %.2f", n1, resp);

    }
    return 0;

}