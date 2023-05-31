#include <stdio.h>
#include <stdlib.h>

int absoluto(int n);
int main(){

    int array[5];
    int y;

    for(y = 0; y < 5; y++){
        printf("n%d: ", y);
        scanf("%d", &array[y]);
    }
    for(int i = 0; i < 5; i++){
        printf("absoluto(%d) = %d\n", array[i], absoluto(array[i]));
    }

    return 0;
}
int absoluto(int n){
    if( n < 0 ){
        return -n;
    }else{
        return n;
    }
}