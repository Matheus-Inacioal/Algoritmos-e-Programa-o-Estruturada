/*Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias: Infantil A 5-7    Infantil B 8-10  Juvenil A 11-13  Juvenil b 14-17  Senior maiores de 18 */

#include <stdio.h>

int main() {
    int idade;

    // Leitura da idade do nadador
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    // Classificação do nadador de acordo com a idade
    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    } else if (idade >= 18) {
        printf("Categoria: Sênior\n");
    } else {
        printf("Idade inválida.\n");
        return 1;
    }

    return 0;
}