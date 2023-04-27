#include <stdio.h>

int main() {
    int numero, maior, menor;  // declaração das variáveis

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    maior = numero;  // o primeiro número digitado é o maior e o menor
    menor = numero;

    while (numero >= 0) {  // enquanto o número digitado for positivo ou zero
        printf("Digite outro numero inteiro: ");
        scanf("%d", &numero);

        if (numero >= 0) {  // se o número for positivo ou zero, atualiza maior e menor
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);

    return 0;
}
