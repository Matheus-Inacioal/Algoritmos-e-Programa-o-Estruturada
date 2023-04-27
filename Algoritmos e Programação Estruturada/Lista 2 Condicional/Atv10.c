#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura, imc;

    // Ler o peso e a altura da pessoa
    printf("Digite o peso da pessoa (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);

    // Calcular o IMC
    imc = peso / pow(altura, 2);

    // Verificar em qual faixa de classificação o IMC se encontra
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso normal\n");
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Sobrepeso\n");
    } else if (imc >= 30.0 && imc <= 34.9) {
        printf("Obesidade grau I\n");
    } else if (imc >= 35.0 && imc <= 39.9) {
        printf("Obesidade grau II\n");
    } else {
        printf("Obesidade grau III\n");
    }

    return 0;
}
