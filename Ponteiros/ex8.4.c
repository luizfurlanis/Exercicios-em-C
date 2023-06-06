#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

void decompoeData(int diaDoAno, int ano, int *mes, int *dia);
bool anoBissexto(int ano);

int main(){

    int dia;
    int ano;
    int mes;
    int diaAno;

    printf("Dia do ano: ");
    scanf("%d", &diaAno);

    printf("Ano: ");
    scanf("%d", &ano);

    decompoeData(diaAno, ano, &mes, &dia);

    printf("O dia %d do ano %d cai no dia %d de mes %d", diaAno, ano, dia, mes);
    return 0;
}

void decompoeData(int diaDoAno, int ano, int *mes, int *dia){

if(diaDoAno < 32){
    *mes = diaDoAno / 30;
}else{
    *mes = diaDoAno / 30 + 1;
}

bool anoBissexto(int ano){

if(*mes == 1 || *mes == 2){
    *dia = diaDoAno - (*mes - 1) * 31;
}else{
    *dia = (diaDoAno - (*mes - 1) * 30) - 1;
}