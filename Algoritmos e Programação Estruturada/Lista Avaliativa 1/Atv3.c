#include <stdio.h>
#define PI 3.14159 // Definição da constante PI

int main() {
    float raio, volume, area; // Declaração das variáveis

    // Entrada do valor do raio
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    // Cálculo do volume e área da esfera
    volume = (4.0/3) * PI * raio * raio * raio;
    area = 4 * PI * raio * raio;

    // Saída dos resultados
    printf("A area da superficie da esfera e de %.2f unidades de area.\n", area);
    printf("O volume da esfera e de %.2f unidades de volume.\n", volume);

    return 0;
}
