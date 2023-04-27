#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída de dados em C.

int main() {
  int a, b, c, d, diferenca; // Declara as variáveis inteiras a, b, c, d e diferenca.

  printf("Digite quatro valores inteiros: "); // Solicita ao usuário que digite quatro valores inteiros.
  scanf("%d %d %d %d", &a, &b, &c, &d); // Lê os valores digitados pelo usuário e armazena nas variáveis a, b, c e d.

  diferenca = (a * b) - (c * d); // Calcula a diferença do produto de A e B pelo produto de C e D e atribui o resultado à variável diferenca.

  printf("DIFERENCA = (%d * %d - %d * %d)\n", a, b, c, d); // Mostra na tela a fórmula utilizada para calcular a diferença.
  printf("DIFERENCA = %d", diferenca); // Mostra na tela o valor da variável diferenca com a mensagem DIFERENCA = .

  return 0; // Retorna 0 para indicar que o programa finalizou sem erros.
}
