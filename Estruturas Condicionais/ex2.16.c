#include <stdio.h>
#include <stdlib.h>

int main (){

    int numero;
    int m;
    int c;
    int d;
    int u;

    printf("Entre com um numero de 1 a 3999:");
    scanf("%d", &numero);

    m = numero / 1000;
    numero = numero - (m * 1000);
    c = numero / 100;
    numero = numero - (c * 100);
    d = numero / 10;
    u = numero - (d * 10);

    if(m==1){
        printf("M");
    }else if(m==2){
        printf("MM");
    }else if(m==3){
        printf("MMM");
    }
    if(c==1){
        printf("C");
    }else if(c==2){
        printf("CC");
    }else if(c==3){
        printf("CCC");
    }else if(c==4){
        printf("CD");
    }else if(c==5){
        printf("D");
    }else if(c==6){
        printf("DC");
    }else if(c==7){
        printf("DCC");
    }else if(c==8){
        printf("DCCC");
    }else if(c==9){
        printf("CM");
    }
    if(d==1){
        printf("X");
    }else if(d==2){
        printf("XX");
    }else if(d==3){
        printf("XXX");
    }else if(d==4){
        printf("XL");
    }else if(d==5){
        printf("L");
    }else if(d==6){
        printf("LX");
    }else if(d==7){
        printf("LXX");
    }else if(d==8){
        printf("LXXX");
    }else if(d==9){
        printf("XC");
    }
    if(u==1){
        printf("I");
    }else if(u==2){
        printf("II");
    }else if(u==3){
        printf("III");
    }else if(u==4){
        printf("IV");
    }else if(u==5){
        printf("V");
    }else if(u==6){
        printf("VI");
    }else if(u==7){
        printf("VII");
    }else if(u==8){
        printf("VIII");
    }else if(u==9){
        printf("IX");
    }
}