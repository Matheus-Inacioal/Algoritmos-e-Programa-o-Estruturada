#include <stdio.h>

int main() {
    int vetor[80];
    int tamanho, numero, i, cont = 0;

    // Leitura do tamanho do vetor
    printf("Digite o tamanho do vetor (no máximo 80): ");
    scanf("%d", &tamanho);

    // Leitura dos elementos do vetor
    printf("Digite os elementos do vetor:\n");
    for(i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Leitura do número a ser buscado no vetor
    printf("Digite o número a ser buscado no vetor: ");
    scanf("%d", &numero);

    // Busca pelo número no vetor
    printf("\nResultados da busca:\n");
    for(i = 0; i < tamanho; i++) {
        if(vetor[i] == numero) {
            cont++;
            printf("O número %d está armazenado na posição %d.\n", numero, i);
        }
    }

    // Exibição do número de ocorrências do número no vetor
    if(cont > 0) {
        printf("\nO número %d aparece %d vezes no vetor.\n", numero, cont);
    } else {
        printf("\nO número %d não foi encontrado no vetor.\n", numero);
    }

    return 0;
}
