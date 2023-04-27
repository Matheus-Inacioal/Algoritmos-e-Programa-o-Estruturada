#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída de dados em C.

#define PI 3.14159 // Define a constante PI como 3.14159.

int main() {
  float raio, area, volume; // Declara as variáveis de ponto flutuante raio, area e volume.

  printf("Digite o valor do raio da esfera: "); // Solicita ao usuário que digite o valor do raio da esfera.
  scanf("%f", &raio); // Lê o valor do raio digitado pelo usuário e armazena na variável raio.

  volume = (4.0/3) * PI * raio * raio * raio; // Calcula o volume da esfera usando a fórmula para o volume de uma esfera.
  area = 4 * PI * raio * raio; // Calcula a área da superfície da esfera usando a fórmula para a área de uma esfera.

  printf("A area da superficie da esfera eh: %.2f\n", area); // Mostra na tela a área da superfície da esfera com 2 casas decimais após a vírgula.
  printf("O volume da esfera eh: %.2f\n", volume); // Mostra na tela o volume da esfera com 2 casas decimais após a vírgula.

  return 0; // Retorna 0 para indicar que o programa finalizou sem erros.
}
