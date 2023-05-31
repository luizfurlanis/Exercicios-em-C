#include <stdio.h>
#include <stdlib.h>

int main (){

    int midade1;
    int midade2;
    int fidade1;
    int fidade2;
    int soma;
    int produto;

    printf("idade homem 1:");
    scanf("%d", &midade1);

    printf("idade homem 2:");
    scanf("%d", &midade2);

    printf("idade mulher 1:");
    scanf("%d", &fidade1);

    printf("idade mulher 2:");
    scanf("%d", &fidade2);

    if(midade1 > midade2 && fidade1 > fidade2){

        soma = midade1 + fidade2;
        produto = midade2 * fidade1; 

        printf("Idade homem mais velho + idade mulher mais nova: %d\n", soma);
        printf("Idade homem mais novo * idade mulher mais velha: %d\n", produto);
    }
    else if(midade1 > midade2 && fidade2 > fidade1){

        soma = midade1 + fidade1;
        produto = midade2 * fidade2;

        printf("Idade homem mais velho + idade mulher mais nova: %d\n", soma);
        printf("Idade homem mais novo * idade mulher mais velha: %d\n", produto);
    }
    else if(midade2 > midade1 && fidade1> fidade2){

        soma = midade2 + fidade2;
        produto = midade1 * fidade1;

        printf("Idade homem mais velho + idade mulher mais nova: %d\n", soma);
        printf("Idade homem mais novo * idade mulher mais velha: %d\n", produto);
    }
    else if(midade2 > midade1 && fidade2 > fidade1){

        soma = midade2 + fidade1;
        produto = midade1 * fidade2;

        printf("Idade homem mais velho + idade mulher mais nova: %d\n", soma);
        printf("Idade homem mais novo * idade mulher mais velha: %d\n", produto);
    }

    return 0;
}