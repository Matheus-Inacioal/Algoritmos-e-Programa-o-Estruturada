#include <stdio.h>

int main() {
    int i, n, soma = 0;
    float media;

    // loop para ler os 10 inteiros e somá-los
    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &n);
        soma += n;
    }

    // cálculo da média
    media = (float) soma / 10;

    // exibe a média na tela
    printf("A media dos numeros digitados e: %.2f\n", media);

    return 0;
}
