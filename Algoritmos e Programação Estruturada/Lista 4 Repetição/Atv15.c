#include <stdio.h>

int main() {
    int n;
    float h = 0.0; // Inicializa a soma com 0.0, pois é uma variável float
    printf("Digite um valor inteiro positivo para n: ");
    scanf("%d", &n); // Lê o valor de n
    while (n <= 0) { // Verifica se n é um número positivo
        printf("Valor inválido! Digite um valor inteiro positivo para n: ");
        scanf("%d", &n);
    }
    for (int i = 1; i <= n; i++) { // Percorre de 1 a n somando os termos da série harmônica
        h += 1.0 / i;
    }
    printf("O valor de Hn para n = %d é %.4f", n, h); // Imprime o resultado com 4 casas decimais
    return 0;
}
