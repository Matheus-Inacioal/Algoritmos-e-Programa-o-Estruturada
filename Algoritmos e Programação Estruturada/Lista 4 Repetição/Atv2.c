#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    for (i = n; i >= 0; i--) { // começa do número digitado e vai até zero
        printf("%d ", i);
    }
    printf("FIM!"); // imprime a mensagem "FIM!" após a contagem regressiva
    return 0;
}   