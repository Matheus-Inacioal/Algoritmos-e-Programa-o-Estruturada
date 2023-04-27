#include <stdio.h>

int main() {
    float soma = 0, valor; // declaração das variáveis soma (inicializada em 0) e valor
    
    for(int i = 1; i <= 10; i++) { // loop para ler 10 valores
        printf("Digite o valor %d: ", i); // solicita ao usuário que digite o valor
        scanf("%f", &valor); // leitura do valor digitado pelo usuário
        soma += valor; // incremento do valor na soma total
    }
    
    printf("A soma dos valores digitados eh: %.2f\n", soma); // exibição do resultado
    
    return 0;
}
