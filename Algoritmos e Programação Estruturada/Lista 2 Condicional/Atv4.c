/*Faça um programa que leia o salário de um trabalhador e o valor da prestação de um
empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não
concedido.”, caso contrário, imprima: “Empréstimo concedido.”*/

#include <stdio.h>  // Inclui a biblioteca stdio.h, necessária para entrada/saída padrão

int main() {  // Função principal do programa

    float salario, prestacao;  // Declara duas variáveis do tipo float para armazenar o salário e a prestação

    printf("Digite o valor do salário: R$ ");  // Exibe a mensagem pedindo para digitar o salário
    scanf("%f", &salario);  // Lê o salário digitado e o armazena na variável salario

    printf("Digite o valor da prestação: R$ ");  // Exibe a mensagem pedindo para digitar o valor da prestação
    scanf("%f", &prestacao);  // Lê o valor da prestação digitado e o armazena na variável prestacao

    if(prestacao > (0.2 * salario)) {  // Verifica se a prestação é maior que 20% do salário
        printf("Empréstimo não concedido.");  // Se sim, exibe a mensagem informando que o empréstimo não pode ser concedido
    } else {  // Se a prestação for menor ou igual a 20% do salário
        printf("Empréstimo concedido.");  // Exibe a mensagem informando que o empréstimo pode ser concedido
    }

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso
}
