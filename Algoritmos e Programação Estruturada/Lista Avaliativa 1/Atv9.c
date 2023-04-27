#include <stdio.h> // inclusão da biblioteca de entrada e saída padrão

int main() {

    int opcao, quantidade; // declaração das variáveis opção e quantidade como inteiras
    float valor_total = 0; // inicialização da variável valor_total como um número real

    do { // início do laço do-while que permite ao usuário realizar a compra de frutas várias vezes

        printf("\nMenu de Frutas:"); // apresentação do menu de frutas para o usuário
        printf("\n1 - Abacaxi (R$ 5,00 a unidade)"); // apresentação das opções disponíveis para o usuário
        printf("\n2 - Maçã (R$ 1,00 a unidade)");
        printf("\n3 - Pera (R$ 4,00 a unidade)");
        printf("\n4 - Sair");
        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao); // leitura da opção escolhida pelo usuário

        switch(opcao) { // estrutura de decisão switch para tratar a opção escolhida pelo usuário

            case 1: // caso o usuário escolha a opção 1 (abacaxi)
                printf("\nDigite a quantidade desejada: ");
                scanf("%d", &quantidade); // leitura da quantidade desejada pelo usuário
                valor_total += quantidade * 5; // cálculo do valor total a ser pago e atualização da variável valor_total
                printf("\nAbacaxi(s) adicionado(s) ao carrinho com sucesso!\n"); // mensagem de confirmação da operação
                break; // interrupção do switch

            case 2: // caso o usuário escolha a opção 2 (maçã)
                printf("\nDigite a quantidade desejada: ");
                scanf("%d", &quantidade); // leitura da quantidade desejada pelo usuário
                valor_total += quantidade * 1; // cálculo do valor total a ser pago e atualização da variável valor_total
                printf("\nMaçã(s) adicionada(s) ao carrinho com sucesso!\n"); // mensagem de confirmação da operação
                break; // interrupção do switch

            case 3: // caso o usuário escolha a opção 3 (pera)
                printf("\nDigite a quantidade desejada: ");
                scanf("%d", &quantidade); // leitura da quantidade desejada pelo usuário
                valor_total += quantidade * 4; // cálculo do valor total a ser pago e atualização da variável valor_total
                printf("\nPera(s) adicionada(s) ao carrinho com sucesso!\n"); // mensagem de confirmação da operação
                break; // interrupção do switch

            case 4: // caso o usuário escolha a opção 4 (sair)
                printf("\nCompra realizada com sucesso! Valor total: R$ %.2f\n", valor_total); // apresentação do valor total a ser pago
                break; // interrupção do switch

            default: // caso o usuário escolha uma opção inválida
                printf("\nOpção inválida! Por favor, escolha uma opção válida.\n"); // mensagem de erro para o usuário
        }

    } while(opcao != 4); // condição

    return 0;

}