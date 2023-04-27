#include <stdio.h>

int main() {
    int vetor[80], n, num, i, cont = 0;
    
    // leitura do vetor
    printf("Digite os elementos do vetor (maximo de 80 elementos):\n");
    for (i = 0; i < 80; i++) {
        if (scanf("%d", &n) != 1) { // verifica se foi digitado um número inteiro
            printf("Digite um numero inteiro.\n");
            i--; // decrementa i para ler novamente o valor para essa posição do vetor
            fflush(stdin); // limpa o buffer do teclado
            continue;
        }
        vetor[i] = n;
    }
    
    // leitura do número a ser procurado no vetor
    printf("Digite um numero a ser procurado no vetor: ");
    if (scanf("%d", &num) != 1) { // verifica se foi digitado um número inteiro
        printf("Digite um numero inteiro.\n");
        return 1;
    }
    
    // busca no vetor pelo número digitado e contagem de ocorrências
    printf("Elementos do vetor iguais ao numero %d:\n", num);
    for (i = 0; i < 80; i++) {
        if (vetor[i] == num) {
            printf("Posicao %d\n", i);
            cont++;
        }
    }
    
    // exibição do resultado
    printf("Total de ocorrencias: %d\n", cont);
    
    return 0;
}