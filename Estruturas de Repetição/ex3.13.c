#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;
    int n2;
    int maiorN;
    int menorN;
    int i;
    int cont = 0;

    printf("N1: ");
    scanf("%d",&n1);
    printf("N2: ");
    scanf("%d",&n2);

    if(n1>=n2){
        maiorN = n1;
        menorN = n2;
    }
    else if(n2>=n1){
        maiorN = n2;
        menorN = n1;
    }

    for(i=menorN;i<=maiorN;i++){
        if(i%2==0){
            cont = cont + 1;
        }
    }

    printf("Multiplos de 2: %d\n",cont);
    cont = 0;

    for(i=menorN;i<=maiorN;i++){
        if(i%3==0){
            cont = cont + 1;
        }
    }

    printf("Multiplos de 3: %d\n",cont);
    cont = 0;

    for(i=menorN;i<=maiorN;i++){
        if(i%4==0){
            cont = cont + 1;
        }
    }

    printf("Multiplos de 4: %d",cont);

    return 0;
}


