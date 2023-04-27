#include <stdio.h>
#include <string.h>

int main() {
    char primeiroNome[20], nomeMeio[20], ultimoNome[20], nomeCompleto[60]; // define as variáveis
    
    printf("Digite o primeiro nome: ");
    scanf("%s", primeiroNome); // lê o primeiro nome e armazena na variável primeiroNome
    
    printf("Digite o(s) nome(s) do meio: ");
    scanf("%s", nomeMeio); // lê o(s) nome(s) do meio e armazena na variável nomeMeio
    
    printf("Digite o último nome: ");
    scanf("%s", ultimoNome); // lê o último nome e armazena na variável ultimoNome
    
    // concatena os nomes e armazena na variável nomeCompleto
    strcpy(nomeCompleto, primeiroNome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, nomeMeio);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, ultimoNome);
    
    printf("Nome completo: %s\n", nomeCompleto); // exibe o nome completo
    
    return 0;
}
