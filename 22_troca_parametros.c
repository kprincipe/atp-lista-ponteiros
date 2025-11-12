// Escreva uma função chamada troca que troca os valores dos parâmetros recebidos. Sua
// assinatura deve ser:
// void troca(float *a, float *b);

#include <stdio.h>

// prototipacao
void troca(float *a, float *b);

int main(void) {
    // declaracao de variaveis
    float a = 2, b = 5;

    // exibe valores antes da troca
    printf("Antes: a = %.2f, b = %.2f\n", a, b);

    // chamada de funcao que executa troca de valores
    troca(&a, &b);

    // exibe valores apos troca
    printf("Depois: a = %.2f, b = %.2f\n", a, b);
    return 0;
}

// funcao que troca valores de dadas duas variaveis do tipo float
void troca(float *a, float *b) {
    float tmp = *a;
    *a = *b;
    *b = tmp;
}

