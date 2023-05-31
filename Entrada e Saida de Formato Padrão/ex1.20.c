#include <stdio.h>
#include <stdlib.h>

int main () {

    int n1;
    int n2;
    int media;

    printf("primeiro numero:");
    scanf("%d" , &n1);

    printf("segundo numero:");
    scanf("%d" , &n2);

    media = (n1 + n2) / 2;

    printf("Media aritmetica: %d" , media);
    return 0;

}