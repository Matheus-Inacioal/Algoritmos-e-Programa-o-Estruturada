#include <stdio.h>

int main() {
    int n, i, flag = 0; // declaração das variáveis
    printf("Digite um número inteiro maior do que 1: ");
    scanf("%d", &n); // solicita ao usuário que digite um número inteiro
    for (i = 2; i <= n/2; ++i) { // loop para verificar se o número é primo
        if (n%i == 0) { // verifica se o número é divisível por algum outro número entre 2 e n/2
            flag = 1; // define a variável "flag" como 1 se o número for divisível por algum outro número
            break; // sai do loop se encontrar um divisor
        }
    }
    if (n == 1) { // verifica se o número digitado é igual a 1
        printf("1 não é um número primo.\n"); // imprime uma mensagem indicando que o número não é primo
    }
    else {
        if (flag == 0)
            printf("%d é um número primo.\n", n); // imprime uma mensagem indicando que o número é primo se a variável "flag" for igual a zero
        else
            printf("%d não é um número primo.\n", n); // imprime uma mensagem indicando que o número não é primo se a variável "flag" for igual a um
    }
    return 0;
}