/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
◦ Homens: (72,7 * h) – 58
◦ Mulheres: (62,1 * h) – 44,7*/

#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;

    // Leitura da altura e do sexo da pessoa
    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);
    printf("Digite o sexo da pessoa (M/F): ");
    scanf(" %c", &sexo);

    // Cálculo do peso ideal de acordo com o sexo
    if (sexo == 'M' || sexo == 'm') { // Homem
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') { // Mulher
        peso_ideal = (62.1 * altura) - 44.7;
    } else { // Sexo inválido
        printf("Sexo inválido.\n");
        return 0;
    }

    // Exibição do resultado
    printf("O peso ideal para uma pessoa de %.2f metros de altura e sexo %c é: %.2f kg\n", altura, sexo, peso_ideal);

    return 0;
}
