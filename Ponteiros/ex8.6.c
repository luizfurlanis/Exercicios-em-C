#include <stdio.h>
#include <stdlib.h>

void pInterno(const double *a1, const double *a2, double *pi, int n);
int main(){

    double a[5];
    double b[5];
    double pi[5];

    for(int j = 1; j <= 2; j++){
        for(int i = 0; i < 5; i++){
            printf("a%d[%d]: ", j, i);
            if(j == 1){
                scanf("%lf", &a[i]);
            }else{
                scanf("%lf", &b[i]);
            }
        }
    }
    pInterno( &a, &b, &pi, 5);
    for(int i = 0; i < 5; i++){
        printf("%.2lf x %.2lf = %.2lf\n", a[i], b[i], pi[i]);
    }
    return 0;
}

void pInterno(const double *a1, const double *a2, double *pi, int n){

    for(int i = 0; i < n; i++){
        pi[i] = a1[i] * a2[i];
    }
}