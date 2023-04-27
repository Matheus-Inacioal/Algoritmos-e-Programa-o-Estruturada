#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        if (i % 2 == 0) { // verifica se o número é par
            printf("%d ", i);
        }
    }
    return 0;
}