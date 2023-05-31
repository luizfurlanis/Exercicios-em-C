#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>


void imprimeDuplaClassificada(int, int, bool);
int main()
{
    int a[5][2];
    bool emOrdemCrescente;
    for (int i = 0; i < 5; i++)
    {
        printf("n1[%d]: ", i);
        scanf("%d", &a[i][0]);
        printf("n2[%d]: ", i);
        scanf("%d", &a[i][1]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            emOrdemCrescente = true;
        }
        else
        {
            emOrdemCrescente = false;
        }

        imprimeDuplaClassificada(a[i][0], a[i][1], emOrdemCrescente);
    }
    return 0;
}

void imprimeDuplaClassificada(int n1, int n2, bool emOrdemCrescente)
{
    int maior;
    int menor;
    if (n1 >= n2)
    {
        maior = n1;
        menor = n2;
    }
    else
    {
        maior = n2;
        menor = n1;
    }
    printf("%d e %d: ", n1, n2);
    if (emOrdemCrescente == true)
    {
        printf("%d ", menor);
        if (menor <= maior)
        {
            printf("<= ");
        }
        else if (menor >= maior)
        {
            printf(">= ");
        }
        printf("%d\n", maior);
    }
    else
    {
        printf("%d ", n1);
        if (n1 <= n2)
        {
            printf("<= ");
        }
        else if (n1 >= n2)
        {
            printf(">= ");
        }
        printf("%d\n", n2);
    }
}