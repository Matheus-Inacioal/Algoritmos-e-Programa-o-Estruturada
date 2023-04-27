#include <stdio.h>

int main()
{
    float x, y; // Declarando as variáveis x e y como float

    // Passo 1: ler os valores de x e y
    printf("Digite as coordenadas x e y do ponto: ");
    scanf("%f %f", &x, &y);

    // Passo 2: verificar se o ponto está na origem
    if (x == 0 && y == 0)
    {
        printf("Origem\n");
    }
    else
    {
        // Passo 3: verificar se o ponto está sobre o eixo Y
        if (x == 0)
        {
            printf("Eixo Y\n");
        }
        else
        {
            // Passo 4: verificar se o ponto está sobre o eixo X
            if (y == 0)
            {
                printf("Eixo X\n");
            }
            else
            {
                // Passo 5: verificar em qual quadrante o ponto está localizado
                if (x > 0)
                {
                    if (y > 0)
                    {
                        printf("Quadrante 1\n");
                    }
                    else
                    {
                        printf("Quadrante 4\n");
                    }
                }
                else
                {
                    if (y > 0)
                    {
                        printf("Quadrante 2\n");
                    }
                    else
                    {
                        printf("Quadrante 3\n");
                    }
                }
            }
        }
    }

    return 0;
}
