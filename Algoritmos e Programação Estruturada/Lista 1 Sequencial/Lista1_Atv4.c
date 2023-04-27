#include <stdio.h> // inclusão da biblioteca padrão de entrada e saída em C

int main() {
    int a, b, x; // declaração das variáveis do tipo inteiro

    printf("Digite o valor de A: "); // mensagem ao usuário
    scanf("%d", &a); // leitura do valor digitado pelo usuário e armazenamento na variável 'a'

    printf("Digite o valor de B: "); // mensagem ao usuário
    scanf("%d", &b); // leitura do valor digitado pelo usuário e armazenamento na variável 'b'

    x = a + b; // operação de soma entre as variáveis 'a' e 'b', e atribuição do resultado à variável 'x'

    printf("%d + %d = %d\n", a, b, x); // exibição da mensagem formatada com os valores das variáveis 'a', 'b' e 'x'

    return 0; // indicação de que o programa foi executado com sucesso
}
