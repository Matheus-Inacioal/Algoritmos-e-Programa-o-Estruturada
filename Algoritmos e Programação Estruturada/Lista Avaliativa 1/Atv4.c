#include <stdio.h>

int main() {
    float x, y;

    // Entrada dos valores de x e y
    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%f %f", &x, &y);

    // Verificação do quadrante ao qual pertence o ponto
    if (x == 0 && y == 0) { // verifica se o ponto está na origem
        printf("Origem\n");
    } else if (x == 0) { // verifica se o ponto está sobre o eixo y
        printf("Eixo Y\n");
    } else if (y == 0) { // verifica se o ponto está sobre o eixo x
        printf("Eixo X\n");
    } else if (x > 0 && y > 0) { // verifica se o ponto está no primeiro quadrante
        printf("Q1\n");
    } else if (x < 0 && y > 0) { // verifica se o ponto está no segundo quadrante
        printf("Q2\n");
    } else if (x < 0 && y < 0) { // verifica se o ponto está no terceiro quadrante
        printf("Q3\n");
    } else { // o ponto está no quarto quadrante
        printf("Q4\n");
    }

    return 0;
}