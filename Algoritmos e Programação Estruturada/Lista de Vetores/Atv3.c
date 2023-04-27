#include <stdio.h>
#include <stdlib.h>

#define MAX_LETRAS 30 // Define o limite máximo de letras a serem lidas

int main() {
    char letras[MAX_LETRAS]; // Declaração do vetor de letras
    int i, qtd_letras; // Variáveis de controle do loop e quantidade de letras lidas

    printf("Digite ate %d letras: ", MAX_LETRAS);
    scanf("%s", letras); // Lê as letras digitadas pelo usuário

    for (qtd_letras = 0; letras[qtd_letras] != '\0'; qtd_letras++); // Conta a quantidade de letras lidas

    printf("Letras digitadas na ordem inversa: ");
    for (i = qtd_letras - 1; i >= 0; i--) { // Loop para imprimir as letras na ordem inversa
        printf("%c", letras[i]);
    }
    printf("\n");

    return 0;
}
