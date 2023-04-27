#include <stdio.h>

int main() {
    int i, num, soma = 0;
    float media;

    // Lê 10 inteiros e soma seus valores
    for (i = 0; i < 10; i++) {
        printf("Digite um inteiro: ");
        scanf("%d", &num);
        soma += num;
    }

    // Calcula a média e imprime na tela
    media = (float) soma / 10;
    printf("A media dos numeros lidos e: %.2f\n", media);

    return 0;
}
