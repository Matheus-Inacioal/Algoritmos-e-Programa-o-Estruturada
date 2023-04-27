/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
usuário entre com o valor e o estado de destino do produto e o programa retorne o preço
final do produto acrescido do imposto do estado em que ele será vendido. Se o estado
digitado não for válido, mostrará uma mensagem de erro.
estado e imposto 
mg  7%  sp 12% rj 15% ms 8%*/

#include <stdio.h>
#include <string.h>

int main() {
    char estado[3];
    float valor, imposto;

    // Leitura do valor e do estado de destino
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Digite o estado de destino (MG, SP, RJ ou MS): ");
    scanf("%s", estado);

    // Cálculo do imposto de acordo com o estado de destino
    if (strcmp(estado, "MG") == 0) {
        imposto = 0.07;
    } else if (strcmp(estado, "SP") == 0) {
        imposto = 0.12;
    } else if (strcmp(estado, "RJ") == 0) {
        imposto = 0.15;
    } else if (strcmp(estado, "MS") == 0) {
        imposto = 0.08;
    } else {
        printf("Erro: estado de destino inválido.\n");
        return 1;
    }

    // Cálculo do preço final e exibição do resultado
    float preco_final = valor * (1 + imposto);
    printf("Preco final do produto: R$ %.2f\n", preco_final);

    return 0;
}
