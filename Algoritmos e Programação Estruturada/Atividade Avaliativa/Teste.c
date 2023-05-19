#include <stdio.h>

int main() {
    float horas_aula, salario_bruto, salario_liquido, desconto_ir, desconto_inss;

    // Recebe a quantidade de horas aula
    printf("Informe a quantidade de horas aula: ");
    scanf("%f", &horas_aula);

    // Calcula o salário bruto
    salario_bruto = horas_aula * 37;

    // Calcula o desconto de imposto de renda
    if (salario_bruto <= 2112) {
        desconto_ir = 0;
    } else if (salario_bruto <= 2826.65) {
        desconto_ir = salario_bruto * 0.075 - 158.40;
    } else if (salario_bruto <= 3751.05) {
        desconto_ir = salario_bruto * 0.15 - 370.40;
    } else if (salario_bruto <= 4664.68) {
        desconto_ir = salario_bruto * 0.225 - 651.73;
    } else {
        desconto_ir = salario_bruto * 0.275 - 884.96;
    }

    // Calcula o desconto de INSS
    if (salario_bruto <= 1302) {
        desconto_inss = salario_bruto * 0.075;
    } else if (salario_bruto <= 2571.29) {
        desconto_inss = salario_bruto * 0.09;
    } else if (salario_bruto <= 3856.94) {
        desconto_inss = salario_bruto * 0.12;
    } else {
        desconto_inss = salario_bruto * 0.14;
    }

    // Calcula o salário líquido
    salario_liquido = salario_bruto - desconto_ir - desconto_inss;

    // Mostra os resultados na tela
    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto de IR: R$ %.2f (%.2f%%)\n", desconto_ir, desconto_ir / salario_bruto * 100);
    printf("Desconto de INSS: R$ %.2f (%.2f%%)\n", desconto_inss, desconto_inss / salario_bruto * 100);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);

    return 0;
}
