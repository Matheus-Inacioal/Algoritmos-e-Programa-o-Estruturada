#include <stdio.h>

int main() {
    int i;
    printf("Contagem regressiva:\n");
    for (i = 10; i >= 0; i--) { // começa do 10 e vai até zero
        printf("%d\n", i);
    }
    printf("FIM!"); // imprime a mensagem "FIM!" após a contagem regressiva
    return 0;
}