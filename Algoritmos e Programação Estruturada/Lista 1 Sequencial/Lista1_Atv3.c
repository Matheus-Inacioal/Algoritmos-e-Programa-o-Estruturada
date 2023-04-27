#include <stdio.h>

int main() {
   int num_int;  // Define a variável para armazenar o número inteiro
   float num_float;  // Define a variável para armazenar o número real float
   double num_double;  // Define a variável para armazenar o número real double
   char letra;  // Define a variável para armazenar o caractere
   char string[100];  // Define a variável para armazenar a string, com um tamanho máximo de 100 caracteres
   void* endereco;  // Define a variável para armazenar o endereço de memória

   printf("Digite um número inteiro: ");
   scanf("%d", &num_int);  // Lê o número inteiro digitado pelo usuário

   printf("Digite um número real em formato float (com 3 casas após a vírgula): ");
   scanf("%f", &num_float);  // Lê o número real float digitado pelo usuário

   printf("Digite um número real em formato double: ");
   scanf("%lf", &num_double);  // Lê o número real double digitado pelo usuário

   printf("Digite um caractere: ");
   scanf(" %c", &letra);  // Lê o caractere digitado pelo usuário, com um espaço antes do %c para ignorar possíveis espaços em branco

   printf("Digite uma string (com até 100 caracteres): ");
   scanf(" %[^\n]s", string);  // Lê a string digitada pelo usuário, usando %[^\n]s para ler todos os caracteres até a quebra de linha (\n)

   printf("Digite um endereço de memória em hexadecimal: ");
   scanf("%p", &endereco);  // Lê o endereço de memória digitado pelo usuário em hexadecimal

   // Imprime os valores lidos na tela, com a formatação especificada
   printf("Numero inteiro: \"%d\"\n", num_int);
   printf("Numeros reais:\n\"%.3f\"\n\"%.15lf\"\n", num_float, num_double);
   printf("Letra: \"%c\"\n", letra);
   printf("String: \"%s\"\n", string);
   printf("Endereço: \"%p\"\n", endereco);

   return 0;
}
