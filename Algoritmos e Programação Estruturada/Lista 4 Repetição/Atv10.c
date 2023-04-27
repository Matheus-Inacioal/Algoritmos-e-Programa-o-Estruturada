#include <stdio.h>

int main() {
    int numeros_lidos = 0; // contador de números lidos
    int soma = 0; // variável para armazenar a soma dos números
    int numero; // variável para armazenar o número lido

    printf("Digite 10 numeros inteiros positivos:\n");

    while (numeros_lidos < 10) { // loop para ler 10 números
        scanf("%d", &numero); // lê o número digitado pelo usuário

        if (numero > 0) { // verifica se o número é positivo
            soma += numero; // adiciona o número à soma
            numeros_lidos++; // incrementa o contador de números lidos
        }
    }

    float media = (float)soma / numeros_lidos; // calcula a média dos números lidos

    printf("A media dos numeros positivos lidos e: %.2f\n", media); // exibe a média com duas casas decimais

    return 0;
}
