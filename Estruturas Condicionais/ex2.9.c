#include <stdio.h>
#include <stdlib.h>

int main (){

    float qlados;
    float mlado;
    float perimetro; 
    float area;

    printf("Entre com a quantidade de lados: ");
    scanf("%f", &qlados);

    printf("Entre com a medida do lado: ");
    scanf("%f", &mlado);

    if(qlados == 3){
        perimetro=3*mlado;

        printf("TRIANGULO de perimetro %.2f", perimetro);
    }

    if(qlados == 4){
        area=mlado*mlado;

        printf("QUADRADO de area %.2f", area);
    }

    if(qlados == 5){
        printf("PENTAGONO");
    }

    if(3>qlados){
        printf("Poligono nao identificado");
    }

    if(qlados>5){
        printf("Poligono nao identificado");
    }
    return 0;
}
