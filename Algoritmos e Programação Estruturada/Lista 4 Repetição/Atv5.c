#include <stdio.h>

int main() {
    int i, sum = 0;
    printf("A soma dos 50 primeiros números pares é: ");
    for (i = 0; i <= 100; i += 2) { // começa do zero e incrementa de dois em dois
        if (i <= 98) { // verifica se não é o último número par
            printf("%d + ", i);
        } else { // se for o último número par, imprime apenas ele e o resultado da soma
            printf("%d = ", i);
        }
        sum += i; // adiciona o número à variável de soma a cada iteração
    }
    printf("%d", sum); // imprime o resultado da soma
    return 0;
}