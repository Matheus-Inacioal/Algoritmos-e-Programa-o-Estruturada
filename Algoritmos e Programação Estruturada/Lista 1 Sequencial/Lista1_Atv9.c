#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída de dados em C.

int main() {
  char nome[100]; // Declara a variável nome como um vetor de caracteres com tamanho máximo de 100.
  float salarioFixo, totalVendas, comissao, salarioFinal; // Declara as variáveis de ponto flutuante salarioFixo, totalVendas, comissao e salarioFinal.

  printf("Digite o nome do vendedor: "); // Solicita ao usuário que digite o nome do vendedor.
  fgets(nome, 100, stdin); // Lê a string digitada pelo usuário e armazena na variável nome.

  printf("Digite o salario fixo do vendedor: "); // Solicita ao usuário que digite o salário fixo do vendedor.
  scanf("%f", &salarioFixo); // Lê o salário fixo digitado pelo usuário e armazena na variável salarioFixo.

  printf("Digite o total de vendas efetuadas pelo vendedor: "); // Solicita ao usuário que digite o total de vendas efetuadas pelo vendedor.
  scanf("%f", &totalVendas); // Lê o total de vendas digitado pelo usuário e armazena na variável totalVendas.

  comissao = 0.15 * totalVendas; // Calcula a comissão de 15% sobre as vendas efetuadas e atribui o resultado à variável comissao.
  salarioFinal = salarioFixo + comissao; // Calcula o salário final do vendedor somando o salário fixo com a comissão e atribui o resultado à variável salarioFinal.

  printf("O vendedor %s", nome); // Mostra na tela o nome do vendedor.
  printf("recebera um salario de R$ %.2f no final do mes.", salarioFinal); // Mostra na tela o salário final do vendedor com duas casas decimais.

  return 0; // Retorna 0 para indicar que o programa finalizou sem erros.
}
