/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o
número digitado ao quadrado e raiz quadrada do número digitado.*/

#include <stdio.h>  // Inclui a biblioteca stdio.h, necessária para entrada/saída padrão
#include <math.h>  // Inclui a biblioteca math.h, necessária para cálculos matemáticos

int main() {  // Função principal do programa

    float numero;  // Declara uma variável do tipo float para armazenar o número digitado

    printf("Digite um número: ");  // Exibe a mensagem pedindo para digitar um número
    scanf("%f", &numero);  // Lê o número digitado e o armazena na variável numero

    if(numero > 0) {  // Verifica se o número digitado é positivo
        printf("O número ao quadrado é: %.2f\n", pow(numero, 2));  // Se sim, calcula o número ao quadrado e o exibe na tela
        printf("A raiz quadrada do número é: %.2f", sqrt(numero));  // Calcula a raiz quadrada do número e a exibe na tela
    } else {  // Se o número digitado não for positivo
        printf("O número digitado não é positivo.");  // Exibe a mensagem informando que o número não é positivo
    }

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso
}
