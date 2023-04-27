#include <stdio.h>

int main() {
    int n, fib, a = 0, b = 1; // declaração de variáveis
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n); // leitura do número informado pelo usuário
    
    // cálculo da sequência de Fibonacci
    for (int i = 1; i <= n; i++) {
        fib = a + b; // soma dos dois termos anteriores para obter o próximo termo
        a = b; // atualização do primeiro termo para o próximo cálculo
        b = fib; // atualização do segundo termo para o próximo cálculo
    }
    
    printf("O %dº termo da sequência de Fibonacci é: %d\n", n, a); // impressão do termo desejado
    
    return 0;
}
