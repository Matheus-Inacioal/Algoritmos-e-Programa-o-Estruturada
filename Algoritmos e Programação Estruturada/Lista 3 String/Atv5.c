#include <stdio.h>
#include <string.h>

int main() {
    char nome[20], sobrenome[20], cpf[12], senha[10]; // declaração das variáveis que serão utilizadas
    
    printf("Digite seu nome: ");
    scanf("%s", nome); // lê o nome digitado pelo usuário e armazena na variável "nome"
    
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome); // lê o sobrenome digitado pelo usuário e armazena na variável "sobrenome"
    
    printf("Digite seu CPF (somente números): ");
    scanf("%s", cpf); // lê o CPF digitado pelo usuário e armazena na variável "cpf"
    
    // concatenação do nome, primeira letra do sobrenome e 3 primeiros dígitos do CPF
    snprintf(senha, 10, "%s%c%c%c", nome, sobrenome[0], cpf[0], cpf[1], cpf[2]); 
    
    printf("Senha gerada: %s\n", senha); // exibe a senha gerada
    
    return 0; // finaliza o programa
}
