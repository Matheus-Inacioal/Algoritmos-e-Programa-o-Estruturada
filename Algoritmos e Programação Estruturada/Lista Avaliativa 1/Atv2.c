#include <stdio.h>
#include <math.h> // Biblioteca para funções matemáticas

int main() {
    float x1, y1, x2, y2, distancia; // Declaração das variáveis

    // Entrada das coordenadas dos pontos
    printf("Digite as coordenadas de P1 (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas de P2 (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    // Cálculo da distância entre os pontos
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Saída do resultado com 4 casas decimais
    printf("A distancia entre os pontos P1(%.2f, %.2f) e P2(%.2f, %.2f) e de %.4f\n", x1, y1, x2, y2, distancia);

    return 0;
}
