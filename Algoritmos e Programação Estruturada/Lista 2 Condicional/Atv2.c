/*Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois
números forem iguais, imprima a mensagem “Números iguais”.*/

#include <stdio.h>  // Inclui a biblioteca stdio.h, necessária para entrada/saída padrão

int main() {  // Função principal do programa

    float num1, num2;  // Declara duas variáveis do tipo float para armazenar os números

    printf("Digite o primeiro número: ");  // Exibe a mensagem pedindo para digitar o primeiro número
    scanf("%f", &num1);  // Lê o primeiro número digitado e armazena na variável num1

    printf("Digite o segundo número: ");  // Exibe a mensagem pedindo para digitar o segundo número
    scanf("%f", &num2);  // Lê o segundo número digitado e armazena na variável num2

    if(num1 > num2) {  // Verifica se o primeiro número é maior que o segundo
        printf("O maior número é: %.2f", num1);  // Se sim, exibe o primeiro número como sendo o maior
    } else if(num2 > num1) {  // Verifica se o segundo número é maior que o primeiro
        printf("O maior número é: %.2f", num2);  // Se sim, exibe o segundo número como sendo o maior
    } else {  // Se nenhum dos dois números for maior que o outro
        printf("Números iguais.");  // Exibe a mensagem informando que os números são iguais
    }

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso
}

