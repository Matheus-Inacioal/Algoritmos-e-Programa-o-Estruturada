#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

int main() {
    int a, b, c, d, diferenca; // Declaração das variáveis

    // Entrada dos valores de A, B, C e D
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    printf("Digite o valor de D: ");
    scanf("%d", &d);

    // Cálculo da diferença entre o produto de A e B e o produto de C e D
    diferenca = a * b - c * d;

    // Saída do resultado no formato especificado
    printf("DIFERENCA = %d * %d - %d * %d\n", a, b, c, d);
    printf("DIFERENCA = %d\n", diferenca);

    return 0; // Indica que o programa terminou sem erros
}
