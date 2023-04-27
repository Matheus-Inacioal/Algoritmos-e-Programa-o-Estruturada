#include <stdio.h>

int main() {
    int escolha, qtd;
    float total = 0;
    do {
        // apresenta o menu de frutas
        printf("Menu de frutas:\n");
        printf("1 => ABACAXI – 5,00 a unidade\n");
        printf("2 => MAÇA – 1,00 a unidade\n");
        printf("3 => PERA – 4,00 a unidade\n");
        printf("Digite a opção desejada (ou 0 para sair): ");
        scanf("%d", &escolha);
        // verifica se o usuário quer sair do programa
        if (escolha == 0) {
            break;
        }
        // solicita a quantidade de frutas
        printf("Digite a quantidade desejada: ");
        scanf("%d", &qtd);
        // realiza o cálculo do total da compra
        switch (escolha) {
            case 1:
                total += qtd * 5.0;
                break;
            case 2:
                total += qtd * 1.0;
                break;
            case 3:
                total += qtd * 4.0;
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (escolha != 0);
    // apresenta o total da compra
    printf("Total da compra: R$ %.2f\n", total);
    return 0;
}
