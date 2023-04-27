#include <stdio.h>
#include <string.h>

int main() {
    char cor[10]; // define uma variável para armazenar a cor digitada pelo usuário
    
    printf("Digite uma cor (branco, verde ou amarelo): ");
    scanf("%s", cor); // lê a cor digitada pelo usuário e armazena na variável cor
    
    // verifica se a cor digitada é válida
    if (strcmp(cor, "branco") == 0 || strcmp(cor, "verde") == 0 || strcmp(cor, "amarelo") == 0) {
        printf("Cor valida!\n");
    } else {
        printf("Cor invalida!\n");
    }
    
    return 0;
}
