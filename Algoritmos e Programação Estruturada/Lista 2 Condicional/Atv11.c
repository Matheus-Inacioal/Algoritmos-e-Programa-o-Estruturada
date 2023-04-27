#include <stdio.h>
#include <math.h> // Incluindo a biblioteca math.h para usar a função cbrt

int main() {
    int num1, num2, num3, opcao; // Declarando as variáveis para armazenar os números e a opção escolhida pelo usuário
    float media; // Declarando a variável para armazenar o resultado da média

    // Passo 1: ler os três números inteiros positivos
    do {
        printf("Digite o primeiro número inteiro positivo: ");
        scanf("%d", &num1); // Lendo o primeiro número
        printf("Digite o segundo número inteiro positivo: ");
        scanf("%d", &num2); // Lendo o segundo número
        printf("Digite o terceiro número inteiro positivo: ");
        scanf("%d", &num3); // Lendo o terceiro número

        // Verificando se os números são positivos
        if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
            printf("Os números devem ser positivos. Tente novamente.\n");
        }
    } while (num1 <= 0 || num2 <= 0 || num3 <= 0);

    // Passo 2: ler o valor numérico para escolher a média a ser calculada
    do {
        printf("Escolha uma opção:\n1 - Média Geométrica\n2 - Média Ponderada\n3 - Média Harmônica\n");
        scanf("%d", &opcao); // Lendo a opção escolhida pelo usuário

        // Verificando se a opção é válida
        if (opcao < 1 || opcao > 3) {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao < 1 || opcao > 3);

    // Passo 3: verificar qual média deve ser calculada de acordo com a opção escolhida
    if (opcao == 1) {
        // Média geométrica
        media = cbrt(num1*num2*num3); // Calculando a média geométrica com a função cbrt
    }
    else if (opcao == 2) {
        // Média ponderada
        int peso1, peso2, peso3; // Declarando as variáveis para armazenar os pesos dos números

        // Lendo os pesos dos números
        printf("Digite o peso do primeiro número: ");
        scanf("%d", &peso1);
        printf("Digite o peso do segundo número: ");
        scanf("%d", &peso2);
        printf("Digite o peso do terceiro número: ");
        scanf("%d", &peso3);

        // Calculando a média ponderada
        media = (num1*peso1 + num2*peso2 + num3*peso3) / (peso1 + peso2 + peso3);
    }
    else {
        // Média harmônica
        float inv1, inv2, inv3; // Declarando as variáveis para armazenar os inversos dos números

        // Calculando os inversos dos números
        inv1 = 1.0 / num1;
        inv2 = 1.0 / num2;
        inv3 = 1.0 / num3;
        // Calculando a média harmônica
    media = 3 / (inv1 + inv2 + inv3);
}

// Passo 5: exibir o resultado
printf("A média escolhida é: %.2f\n", media); // Exibindo o resultado com duas casas decimais

return 0;
}
