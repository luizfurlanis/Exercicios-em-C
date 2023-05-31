#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int idade = 0;
    int numero = 1;
    int t21 = 0;
    int t50 = 0;

    while (idade >= 0){

        printf("Idade da pessoa %02d:", numero++);
        scanf("%d", &idade);

        if(idade >= 0){
            if(idade < 21){
                t21++;
            }else if(idade > 50){
                t50++;
            }
        }
    }

    printf("Total de pessoas menores de 21 anos: %d\n", t21);
    printf("Total de pessoas com mais de 50 anos: %d", t50);

    return 0;

}