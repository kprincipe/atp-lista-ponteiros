// Crie uma função que receba uma string como parâmetro (de tamanho desconhecido) e
// retorne uma cópia da mesma. A assinatura da função deve ser:
// char *strcopy(char *str);

#include <stdio.h>
#include <stdlib.h>

// prototipacao
char *strcopy(char *str);

int main(void) {
    // declaracao de variaveis
    char *str = "oi td bem?\n";
    char *copia = strcopy(str);

    // saida da copia
    printf("%s", copia);

    return 0;
}

// funcao que faz copia da string na memoria dinamica
// pode causar memory leak!
char *strcopy(char *str) {
    int tam = 0;
    
    // adquire tamanho de str
    while (str[tam++] != 0);

    // aloca espaco na memoria para armazenar copia
    char *copia = malloc(sizeof(char) * tam);

    // copia elemento por elemento na nova string
    for (int i = 0; i < tam; ++i) {
        copia[i] = str[i];
    }
    
    // retorna ponteiro para primeiro caractere da copia
    return copia;
}
