#include <stdio.h>
#include <stdlib.h>

void decompoeTempo(int TotalSeg, int *horas, int *minutos, int *seg);
int main (){
    
    int seg;
    int h;
    int min;
    int sec;

    printf("Total de segundos: ");
    scanf("%d", &seg);

    decompoeTempo(seg, &h, &min, &sec);

    printf("%d segundo(s) corresponde(m) a:\n    %d hora(s)\n    %d minuto(s)\n    %d segundo(s)", seg, h, min, sec);
}

void decompoeTempo(int TotalSeg, int *horas, int *minutos, int *seg){

    *horas = TotalSeg / 3600;
    *minutos = (TotalSeg - (*horas * 3600)) / 60;
    *seg = (TotalSeg - (*horas * 3600) - (*minutos * 60));
}