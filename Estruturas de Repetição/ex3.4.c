#include <stdio.h>
#include <stdlib.h>

int main (){
    int resp;

    for(int i = 15; i <= 30; i++){
        resp = i*i;
        printf("%d ", resp);
    }
    return 0;
}