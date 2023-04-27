#include <stdio.h>

int main() {
    int n, i, termo_anterior = 0, termo_atual = 1, proximo_termo;

    // Lê um número inteiro do usuário
    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    // Verifica se o usuário digitou um número válido
    if (n < 0) {
        printf("O numero deve ser maior ou igual a zero.\n");
        return 0;
    }

    // Calcula o enésimo termo da sequência de Fibonacci
    for (i = 0; i < n; i++) {
        if (i <= 1) {
            proximo_termo = i;
        } else {
            proximo_termo = termo_anterior + termo_atual;
            termo_anterior = termo_atual;
            termo_atual = proximo_termo;
        }
    }

    // Imprime o resultado
    printf("O %d-esimo termo da sequencia de Fibonacci eh %d\n", n, proximo_termo);

    return 0;
}
