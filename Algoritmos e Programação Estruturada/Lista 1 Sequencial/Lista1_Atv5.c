#include <stdio.h> // inclusão da biblioteca padrão de entrada e saída em C

int main() {
    int a, b; // declaração das variáveis do tipo inteiro

    printf("Digite o valor de A: "); // mensagem ao usuário
    scanf("%d", &a); // leitura do valor digitado pelo usuário e armazenamento na variável 'a'

    printf("Digite o valor de B: "); // mensagem ao usuário
    scanf("%d", &b); // leitura do valor digitado pelo usuário e armazenamento na variável 'b'

    printf("%d + %d = %d\n", a, b, a + b); // exibição da mensagem formatada com o resultado da soma entre as variáveis 'a' e 'b'

    return 0; // indicação de que o programa foi executado com sucesso
}
