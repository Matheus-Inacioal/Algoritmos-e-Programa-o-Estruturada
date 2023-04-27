#include <stdio.h>

int main() {
    int soma = 0; // variável para armazenar a soma dos múltiplos
    int i; // variável para percorrer os números naturais
    
    // laço de repetição para percorrer os números naturais abaixo de 1000
    for (i = 1; i < 1000; i++) {
        // verifica se o número é múltiplo de 3 ou 5
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i; // adiciona o número à soma dos múltiplos
        }
    }
    
    printf("A soma dos numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 eh: %d\n", soma);
    
    return 0;
}
