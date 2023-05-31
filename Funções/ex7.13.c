#include <stdio.h>
#include <stdlib.h>

int classificaTrinca(int n1, int n2, int n3);

int main(){
    
    int a[3];
    int b[3];
    int c[3];

    for(int i = 0; i < 3; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &a[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &b[i]);

        printf("n3[%d]: ", i);
        scanf("%d", &c[i]);
    }

    for(int i = 0; i < 3; i++){
        printf("%d, %d e %d:", a[i], b[i], c[i]);
        classificaTrinca(a[i], b[i], c[i]);
    }
    return 0;
}

int classificaTrinca(int n1, int n2, int n3){

    if(n1 >= n2 && n2 >= n3){
        printf(" %d <= %d <= %d\n", n3, n2, n1);
    }
    else if(n1 >= n3 && n3 >= n2){
        printf(" %d <= %d <= %d\n", n2, n3, n1);
    }
    else if(n2 >= n3 && n3 >= n1){
        printf(" %d <= %d <= %d\n", n1, n3, n2);
    }
    else if(n2 >= n1 && n1 >= n3){
        printf(" %d <= %d <= %d\n", n3, n1, n2);
    }
    else if(n3 >= n2 && n2 >= n1){
        printf(" %d <= %d <= %d\n", n1, n2, n3);
    }
    else if(n3 >= n1 && n1 >= n2){
        printf(" %d <= %d <= %d\n", n2, n1, n3);
    }
}