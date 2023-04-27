#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (9 * celsius / 5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float celsiusToReaumur(float celsius) {
    return celsius * 4 / 5;
}

float reaumurToCelsius(float reaumur) {
    return reaumur * 5 / 4;
}

float kelvinToRankine(float kelvin) {
    return kelvin * 1.8;
}

float rankineToKelvin(float rankine) {
    return rankine / 1.8;
}

int main() {
    int opcao;
    float temperatura;

    printf("Escolha a opcao desejada:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("3 - Celsius para Kelvin\n");
    printf("4 - Kelvin para Celsius\n");
    printf("5 - Celsius para Reaumur\n");
    printf("6 - Reaumur para Celsius\n");
    printf("7 - Kelvin para Rankine\n");
    printf("8 - Rankine para Kelvin\n");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (opcao) {
        case 1:
            printf("%.2f C = %.2f F\n", temperatura, celsiusToFahrenheit(temperatura));
            break;
        case 2:
            printf("%.2f F = %.2f C\n", temperatura, fahrenheitToCelsius(temperatura));
            break;
        case 3:
            printf("%.2f C = %.2f K\n", temperatura, celsiusToKelvin(temperatura));
            break;
        case 4:
            printf("%.2f K = %.2f C\n", temperatura, kelvinToCelsius(temperatura));
            break;
        case 5:
            printf("%.2f C = %.2f Re\n", temperatura, celsiusToReaumur(temperatura));
            break;
        case 6:
            printf("%.2f Re = %.2f C\n", temperatura, reaumurToCelsius(temperatura));
            break;
        case 7:
            printf("%.2f K = %.2f R\n", temperatura, kelvinToRankine(temperatura));
            break;
        case 8:
            printf("%.2f R = %.2f K\n", temperatura, rankineToKelvin(temperatura));
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}