/*Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior
do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem
positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão
escrever "Valores nao aceitos".*/

#include <stdio.h>

int main() {
    int a, b, c, d;

    // Leitura dos valores de A, B, C e D
    printf("Digite os valores de A, B, C e D: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Verificação das condições
    if (b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0 && a % 2 == 0) {
        printf("Valores aceitos.\n");
    } else {
        printf("Valores nao aceitos.\n");
    }

    return 0;
}
