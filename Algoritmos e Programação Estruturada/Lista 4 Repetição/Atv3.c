#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    while (i <= n) { // enquanto i for menor ou igual a n
        if (i % 2 != 0) { // verifica se o número é ímpar
            printf("%d ", i);
        }
        i++; // incrementa i em 1 a cada iteração
    }
    return 0;
}