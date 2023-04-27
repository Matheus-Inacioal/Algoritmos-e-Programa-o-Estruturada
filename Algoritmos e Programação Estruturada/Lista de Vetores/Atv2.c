#include <stdio.h>

int main() {
    int num_alunos; // variável para armazenar o número de alunos
    float notas[50]; // vetor de notas com tamanho máximo de 50
    int i; // contador do loop

    printf("Digite o numero de alunos: ");
    scanf("%d", &num_alunos); // leitura do número de alunos

    if (num_alunos <= 0 || num_alunos > 50) { // verificação se o número de alunos é válido
        printf("Numero de alunos invalido. Digite um valor entre 1 e 50.\n");
        return 1; // encerra o programa com erro
    }

    // loop para ler as notas dos alunos
    for (i = 0; i < num_alunos; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    // exibição das notas lidas
    printf("Notas lidas:\n");
    for (i = 0; i < num_alunos; i++) {
        printf("Aluno %d: %.2f\n", i+1, notas[i]);
    }

    return 0; // encerra o programa com sucesso
}
