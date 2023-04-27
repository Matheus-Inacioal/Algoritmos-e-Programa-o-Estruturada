//Faça um programa que leia dois números e mostre qual deles é o maior

#include <stdio.h>

int main() {
    // declaração das variáveis que vão armazenar os números digitados
    int num1, num2;
    
    // pede ao usuário para digitar os números e armazena nas variáveis
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    // verifica qual é o maior número e imprime na tela
    if (num1 > num2) {
        printf("O maior número é: %d", num1);
    } else {
        printf("O maior número é: %d", num2);
    }
    
    return 0;
}
