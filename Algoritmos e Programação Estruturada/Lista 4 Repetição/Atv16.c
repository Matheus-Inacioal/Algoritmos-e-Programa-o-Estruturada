#include <stdio.h>

int main() {
    int n, num = 1; // declaração das variáveis

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n); // leitura do número de linhas

    for (int i = 1; i <= n; i++) { // loop pelas linhas
        for (int j = 1; j <= i; j++) { // loop pelas colunas
            printf("%d ", num); // impressão do número atual
            num++; // incremento do número atual
        }
        printf("\n"); // quebra de linha após cada linha impressa
    }

    return 0;
}
