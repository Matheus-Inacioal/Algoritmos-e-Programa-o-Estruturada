#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída de dados em C.

int main() {
  int a, b, prod; // Declara as variáveis inteiras a, b e prod.

  printf("Digite dois valores inteiros: "); // Solicita ao usuário que digite dois valores inteiros.
  scanf("%d %d", &a, &b); // Lê os valores digitados pelo usuário e armazena nas variáveis a e b.

  prod = a * b; // Calcula o produto entre a e b e atribui o resultado à variável prod.

  printf("PROD = %d", prod); // Mostra na tela o valor da variável prod com a mensagem PROD = .
  
  return 0; // Retorna 0 para indicar que o programa finalizou sem erros.
}
