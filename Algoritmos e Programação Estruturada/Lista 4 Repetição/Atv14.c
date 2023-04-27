#include <stdio.h>

int main() {
    int numero, maior, menor;
    // inicializa as variáveis maior e menor com o primeiro número lido
    printf("Digite um numero inteiro positivo (ou negativo para encerrar): ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;
    
    // loop para receber números do usuário e atualizar o maior e o menor número lido
    while (numero >= 0) {
        // atualiza o maior e o menor número lido, se necessário
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
        
        // pede outro número ao usuário
        printf("Digite outro numero inteiro positivo (ou negativo para encerrar): ");
        scanf("%d", &numero);
    }
    
    // imprime o maior e o menor número lido
    printf("O maior numero lido foi %d e o menor foi %d\n", maior, menor);
    
    return 0;
}
