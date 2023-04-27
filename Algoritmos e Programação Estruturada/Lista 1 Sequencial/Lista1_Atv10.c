#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída de dados em C.
#include <math.h> // Inclui a biblioteca matemática em C para utilizar a função sqrt (raiz quadrada).

int main() {
  float x1, y1, x2, y2, distancia; // Declara as variáveis de ponto flutuante x1, y1, x2, y2 e distancia.

  printf("Digite as coordenadas do ponto p1 (x1 y1): "); // Solicita ao usuário que digite as coordenadas do ponto p1.
  scanf("%f %f", &x1, &y1); // Lê as coordenadas do ponto p1 digitadas pelo usuário e armazena nas variáveis x1 e y1.

  printf("Digite as coordenadas do ponto p2 (x2 y2): "); // Solicita ao usuário que digite as coordenadas do ponto p2.
  scanf("%f %f", &x2, &y2); // Lê as coordenadas do ponto p2 digitadas pelo usuário e armazena nas variáveis x2 e y2.

  distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); // Calcula a distância entre os pontos p1 e p2 usando a fórmula da distância entre dois pontos no plano.
  // A função pow é usada para elevar ao quadrado as diferenças entre as coordenadas x e y dos pontos, e a função sqrt é usada para calcular a raiz quadrada da soma dos quadrados.

  printf("A distancia entre os pontos p1 e p2 eh: %.4f\n", distancia); // Mostra na tela a distância entre os pontos p1 e p2 com 4 casas decimais após a vírgula.

  return 0; // Retorna 0 para indicar que o programa finalizou sem erros.
}
