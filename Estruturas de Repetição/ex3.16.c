#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int temp;
    int n1 = 1;
    int n2 = 1;

    printf("%d %d ", n1, n2);

    for(int i = 2; i <= 19; i++){
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;

        printf("%d ", temp);
    }
}