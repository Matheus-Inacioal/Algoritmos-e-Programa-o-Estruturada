#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;
    float salario;

    int contador_fem_18_35_cast_cast = 0; // contador para habitantes femininos com idade entre 18 e 35 anos e olhos e cabelos castanhos
    int contador_total = 0; // contador para o total de habitantes

    // loop para ler os dados de cada habitante
    while (1) {
        printf("Digite os dados do habitante:\n");

        // leitura dos dados
        printf("Sexo (m ou f): ");
        scanf(" %c", &sexo);

        printf("Cor dos olhos (a, v, c ou p): ");
        scanf(" %c", &olhos);

        printf("Cor dos cabelos (l, c, p ou r): ");
        scanf(" %c", &cabelos);

        printf("Idade (entre 10 e 100 anos): ");
        scanf("%d", &idade);

        printf("Salario: ");
        scanf("%f", &salario);

        // validação dos dados
        if (idade == -1) {
            break; // fim da pesquisa
        }

        if (sexo != 'm' && sexo != 'f') {
            printf("Sexo invalido! Digite novamente.\n");
            continue; // volta para o inicio do loop
        }

        if (olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p') {
            printf("Cor dos olhos invalida! Digite novamente.\n");
            continue; // volta para o inicio do loop
        }

        if (cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r') {
            printf("Cor dos cabelos invalida! Digite novamente.\n");
            continue; // volta para o inicio do loop
        }

        if (idade < 10 || idade > 100) {
            printf("Idade invalida! Digite novamente.\n");
            continue; // volta para o inicio do loop
        }

        if (salario < 0) {
            printf("Salario invalido! Digite novamente.\n");
            continue; // volta para o inicio do loop
        }

        // se chegou aqui, os dados são válidos
        contador_total++;

        if (sexo == 'f' && idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c') {
            contador_fem_18_35_cast_cast++;
        }
    }

    // calcular a porcentagem
    float porcentagem = 100.0 * contador_fem_18_35_cast_cast / contador_total;

    // exibir os resultados
    printf("\n");
    printf("Total de habitantes: %d\n", contador_total);
    printf("Habitantes femininos com idade entre 18 e 35 anos e olhos e cabelos castanhos: %d\n", contador_fem_18_35_cast_cast);
    printf("Porcentagem: %.2f%%\n", porcentagem);

    return 0;
}
