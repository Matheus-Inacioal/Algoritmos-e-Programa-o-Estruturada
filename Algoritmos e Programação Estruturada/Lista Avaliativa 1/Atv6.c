#include <stdio.h>

int main() {
    int soma = 0, i;

    // Percorre todos os números inteiros de 1 até 999
    for (i = 1; i < 1000; i++) {
        // Verifica se o número é múltiplo de 3 ou 5
        if (i % 3 == 0 || i % 5 == 0) {
            // Se for múltiplo, soma esse número à variável soma
            soma += i;
        }
    }

    // Imprime o valor da variável soma
    printf("A soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5 é: %d\n", soma);

    return 0;
}
