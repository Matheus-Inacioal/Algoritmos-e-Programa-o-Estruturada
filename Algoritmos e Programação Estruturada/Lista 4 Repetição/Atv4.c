#include <stdio.h>

int main() {
    int i, count = 0;
    printf("Os primeiros cinco múltiplos de 3 são: ");
    for (i = 1; count < 5; i++) { // enquanto count for menor que 5
        if (i % 3 == 0) { // verifica se o número é múltiplo de 3
            printf("%d ", i);
            count++; // incrementa count em 1 a cada múltiplo encontrado
        }
    }
    return 0;
}