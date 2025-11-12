// Escreva uma função que recebe como parâmetros um vetor de inteiros v, o número de
// elementos dele N e ponteiros para variáveis nas quais devem ser armazenados os valores
// maximo e minimo do vetor. Sua assinatura deve ser:
// void maximoMinimo(int *v, int N, int *maximo, int *minimo);

#include <stdio.h>

#define TAM 10

void maximoMinimo(int *v, int N, int *maximo, int *minimo);

int main(void) {
    int v[TAM] = { 5, 2, 6, 8, 5, 2, 1, 2, 6, 4 };
    int maximo, minimo;

    maximoMinimo(v, TAM, &maximo, &minimo);

    printf("Vetor: ");
    for (int i = 0; i < TAM; ++i) {
        printf("%d ", v[i]);
    }
    printf("\n\n");

    printf("Maximo: %d\n", maximo);
    printf("Minimo: %d\n", minimo);
    return 0;
}

void maximoMinimo(int *v, int N, int *maximo, int *minimo) {
   int max = v[0], min = v[0];

   for (int i = 0; i < N; ++i) {
       if (v[i] > max) {
           max = v[i];
       }

       if (v[i] < min) {
           min = v[i];
       }
   }

   *maximo = max;
   *minimo = min;
}
