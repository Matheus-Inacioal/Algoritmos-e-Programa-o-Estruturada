#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], email[50], endereco[100]; // define as variáveis para armazenar os dados do usuário

    // solicita os dados do usuário e armazena nas respectivas variáveis
    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin);

    printf("Digite seu e-mail: ");
    fgets(email, 50, stdin);

    printf("Digite seu endereco: ");
    fgets(endereco, 100, stdin);

    // remove o caractere '\n' do final de cada string
    nome[strcspn(nome, "\n")] = 0;
    email[strcspn(email, "\n")] = 0;
    endereco[strcspn(endereco, "\n")] = 0;

    // faz backup dos dados do usuário em novas variáveis
    char backup_nome[50], backup_email[50], backup_endereco[100];
    strcpy(backup_nome, nome);
    strcpy(backup_email, email);
    strcpy(backup_endereco, endereco);

    // exibe os dados originais e os backups
    printf("Dados originais:\n");
    printf("Nome: %s\nE-mail: %s\nEndereco: %s\n", nome, email, endereco);
    printf("Backups:\n");
    printf("Nome: %s\nE-mail: %s\nEndereco: %s\n", backup_nome, backup_email, backup_endereco);

    return 0;
}
