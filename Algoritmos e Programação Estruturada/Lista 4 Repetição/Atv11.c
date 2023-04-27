#include <stdio.h>

int main() {
    int numero, i;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &numero); // lê o número digitado pelo usuário
    
    printf("Os divisores do numero %d sao: ", numero);
    
    for (i = 1; i <= numero; i++) { // percorre os números de 1 até o número digitado
        if (numero % i == 0) { // verifica se i é um divisor de número
            printf("%d, ", i); // imprime i se for um divisor
        }
    }
    
    return 0;
}
