#include <stdio.h>

int main() {
    float notas[30]; // vetor de reais para armazenar as notas
    
    // leitura das notas dos alunos
    for (int i = 0; i < 30; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }
    
    // impressão das notas dos alunos
    printf("\nNotas dos alunos:\n");
    for (int i = 0; i < 30; i++) {
        printf("Aluno %d: %.2f\n", i+1, notas[i]);
    }
    
    return 0;
}
