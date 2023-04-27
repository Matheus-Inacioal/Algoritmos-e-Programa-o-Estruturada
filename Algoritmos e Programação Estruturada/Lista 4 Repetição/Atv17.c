#include <stdio.h>

int main() {
   int num, i, flag = 0;

   printf("Digite um numero inteiro maior do que 1: ");
   scanf("%d", &num);

   // Verificando se o número é divisível por algum número inteiro de 2 até a sua metade
   for(i = 2; i <= num/2; ++i) {
      if(num%i == 0) {
          flag = 1; // Se encontrou um divisor, atribui 1 à flag
          break;
      }
   }

   if(flag == 0 && num > 1) // Se a flag ainda é zero e o número é maior do que 1, então é primo
       printf("%d eh primo", num);
   else
       printf("%d nao eh primo", num);

   return 0;
}
