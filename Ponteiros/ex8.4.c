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

    int array[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    *mes = 0;

    if(anoBissexto){
        array[1] = 29;
    }

    *dia = diaDoAno;

    for(int i = 0; i < 12; i++){
        if(*dia > array[i]){
            *mes++;
            *dia = *dia - array[i]; 
        }
    }
    
}

bool anoBissexto(int ano){

    if(ano % 4 == 0){
        return true;
    }
    return false;
}