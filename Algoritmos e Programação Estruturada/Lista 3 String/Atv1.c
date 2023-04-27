#include <stdio.h>
#include <string.h> // biblioteca necessária para utilizar a função strlen()

int main() {
    char nome[100]; // declaração da variável para armazenar o nome completo
    int qtd_caracteres; // declaração da variável para armazenar a quantidade de caracteres
    
    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin); // leitura do nome completo utilizando fgets() para evitar possíveis erros
    
    nome[strcspn(nome, "\n")] = '\0'; // remoção do caractere '\n' que é adicionado pelo fgets()
    
    qtd_caracteres = strlen(nome); // cálculo da quantidade de caracteres utilizando a função strlen()
    
    printf("O nome digitado tem %d caracteres.\n", qtd_caracteres); // exibição da quantidade de caracteres
    
    return 0;
}