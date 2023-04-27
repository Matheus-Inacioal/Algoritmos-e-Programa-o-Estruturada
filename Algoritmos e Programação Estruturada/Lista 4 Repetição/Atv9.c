#include <stdio.h>

int main() {
    int num, min, max, i; // define as variáveis num, min, max e i do tipo inteiro

    // lê o primeiro número e armazena nas variáveis min e max
    printf("Digite o 1o numero: ");
    scanf("%d", &num);
    min = num;
    max = num;

    // lê os próximos 9 números e compara com os valores armazenados nas variáveis min e max
    for (i = 2; i <= 10; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &num);

        if (num < min) {
            min = num; // atualiza o valor de min caso num seja menor que min
        }
        if (num > max) {
            max = num; // atualiza o valor de max caso num seja maior que max
        }
    }

    // exibe o menor e o maior valor lido
    printf("O menor valor lido foi %d\n", min);
    printf("O maior valor lido foi %d\n", max);

    return 0;
}
