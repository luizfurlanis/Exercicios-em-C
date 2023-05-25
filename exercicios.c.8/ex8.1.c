#include <stdio.h>
#include <stdlib.h>

void somatorioMedia(float a[], int n, float *somatorio, float * media);
int main (){

    float array[10];
    int n;
    float soma;
    float media;

    for(int i = 0; i < 10; i++){
        printf("n[%d]: ", i);
        scanf("%d", &array[i]);
    }

    somatorioMedia(array, 10, &soma, &media);
    printf("Somatorio: %.2f\n", soma);
    printf("Media: %.2f", media);

    return 0;
}

void somatorioMedia(float a[], int n, float *somatorio, float *media){

    for(int i = 0; i < n; i++){
        *somatorio += a[i];
    }

    *media = *somatorio / n;
}