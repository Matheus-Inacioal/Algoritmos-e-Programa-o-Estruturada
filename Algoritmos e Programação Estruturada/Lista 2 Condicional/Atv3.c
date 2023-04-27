/*Faça um programa que leia um número inteiro e verifique se esse número é par ou
ímpar.*/

#include <stdio.h>  // Inclui a biblioteca stdio.h, necessária para entrada/saída padrão

int main() {  // Função principal do programa

    int num;  // Declara uma variável do tipo int para armazenar o número

    printf("Digite um número inteiro: ");  // Exibe a mensagem pedindo para digitar o número
    scanf("%d", &num);  // Lê o número digitado e armazena na variável num

    if(num % 2 == 0) {  // Verifica se o número é divisível por 2 (seu resto é igual a 0)
        printf("%d é um número par.", num);  // Se sim, exibe a mensagem informando que o número é par
    } else {  // Se o número não for divisível por 2 (seu resto é diferente de 0)
        printf("%d é um número ímpar.", num);  // Exibe a mensagem informando que o número é ímpar
    }

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso
}
