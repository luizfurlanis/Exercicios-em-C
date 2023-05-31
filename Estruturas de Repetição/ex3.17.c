#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int temp;
    int n1 = 1;
    int n2 = 1;
    int termo;

    printf("Termo desejado:");
    scanf("%d", &termo);

    if(termo == 0 || termo == 1){
        printf("Fibonacci de %d e 1", termo);
    }else{
    for(int i = 2; i <= termo; i++){
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
    }
    printf("Fibonacci de %d e %d", termo, temp);
    }
}