// Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços de duas
// variáveis inteiras, digamos min e max, e deposite nessas variáveis o valor de um elemento
// mínimo e o valor de um elemento máximo do vetor. Escreva também uma função main que
// use a função mm.

#include <stdio.h>

void mm(int v[], int *min, int *max);

int main(void) {
    int v[10] = { 2, 44, 66, 3, 5, 7, 45, 12, 25, 10};
    int maior, menor;

    mm(v, &menor, &maior);
    
    for (int i = 0; i < 10; ++i) {
        printf("%d ", v[i]);
    }
    printf("\nMaior: %d\nMenor: %d\n", maior, menor);
}

void mm(int *v, int *min, int *max) {
    int tmpmaior = v[0], tmpmenor = v[0];
    for (int i = 0; i < 10; ++i) {
        if (v[i] > tmpmaior) {
            tmpmaior = v[i];
        }
        if (v[i] < tmpmenor) {
            tmpmenor = v[i];
        }
    }
    *min = tmpmenor;
    *max = tmpmaior;
}
