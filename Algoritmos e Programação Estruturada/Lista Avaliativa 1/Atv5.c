#include <stdio.h>

int main() {
    int num, i;

    // Lê um número inteiro positivo digitado pelo usuário
    printf("Digite um número positivo: ");
    scanf("%d", &num);

    // Percorre todos os números inteiros de 1 até o número digitado
    printf("Os divisores do número %d são: ", num);
    for (i = 1; i <= num; i++) {
        // Verifica se o número digitado é divisível por cada um desses números
        if (num % i == 0) {
            // Se for divisível, imprime o número como divisor
            printf("%d ", i);
        }
    }

    return 0;
}
