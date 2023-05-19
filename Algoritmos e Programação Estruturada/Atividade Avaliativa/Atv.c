#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USUARIOS 1000
#define MAX_NOME 100
#define MAX_EMAIL 100
#define MAX_SEXO 15
#define MAX_ENDERECO 100

// Estrutura do usuário
typedef struct {
    int id;
    char nomeCompleto[MAX_NOME];
    char email[MAX_EMAIL];
    char sexo[MAX_SEXO];
    char endereco[MAX_ENDERECO];
    double altura;
    int vacina;
} Usuario;

// Função para gerar um ID aleatório
int gerarId() {
    return rand() % 1000 + 1;
}

// Função para adicionar um usuário
void adicionarUsuario(Usuario usuarios[], int *totalUsuarios) {
    if (*totalUsuarios >= MAX_USUARIOS) {
        printf("Limite máximo de usuários atingido.\n");
        return;
    }
    
    Usuario novoUsuario;
    novoUsuario.id = gerarId();
    
    printf("Digite o nome completo do usuário: ");
    fgets(novoUsuario.nomeCompleto, MAX_NOME, stdin);
    novoUsuario.nomeCompleto[strcspn(novoUsuario.nomeCompleto, "\n")] = '\0'; // Remove o caractere de nova linha
    
    printf("Digite o email do usuário: ");
    fgets(novoUsuario.email, MAX_EMAIL, stdin);
    novoUsuario.email[strcspn(novoUsuario.email, "\n")] = '\0'; // Remove o caractere de nova linha
    
    printf("Digite o sexo do usuário (Feminino/Masculino/Indiferente): ");
    fgets(novoUsuario.sexo, MAX_SEXO, stdin);
    novoUsuario.sexo[strcspn(novoUsuario.sexo, "\n")] = '\0'; // Remove o caractere de nova linha
    
    printf("Digite o endereço do usuário: ");
    fgets(novoUsuario.endereco, MAX_ENDERECO, stdin);
    novoUsuario.endereco[strcspn(novoUsuario.endereco, "\n")] = '\0'; // Remove o caractere de nova linha
    
    printf("Digite a altura do usuário (em metros): ");
    scanf("%lf", &novoUsuario.altura);
    
    printf("O usuário foi vacinado? (1 - Sim / 0 - Não): ");
    scanf("%d", &novoUsuario.vacina);
    
    getchar(); // Limpa o buffer do teclado
    
    usuarios[*totalUsuarios] = novoUsuario;
    (*totalUsuarios)++;
    
    printf("Usuário adicionado com sucesso.\n");
}

// Função para editar um usuário
void editarUsuario(Usuario usuarios[], int totalUsuarios) {
    if (totalUsuarios == 0) {
        printf("Não há usuários cadastrados.\n");
        return;
    }
    
    int id;
    printf("Digite o ID do usuário que deseja editar: ");
    scanf("%d", &id);
    
    int index = -1;
    for (int i = 0; i < totalUsuarios; i++) {
        if (usuarios[i].id == id) {
            index = i;
            break;
        }
    }
    
    if (index == -1) {
        printf("Usuário não encontrado.\n");
        return;
    }
    
    getchar(); // Limpa o buffer do teclado
    
    printf("Digite o novo nome completo do usuário: ");
    fgets(usuarios[index].nomeCompleto, MAX_NOME, stdin);
    usuarios[index].nomeCompleto[strcspn(usuarios[index].nomeCompleto, "\n")] = '\0'; // Remove o caractere de nova linha
    
    printf("Digite o novo email do usuário: ");
    fgets(usuarios[index].email, MAX_EMAIL, stdin);
    usuarios[index].email[strcspn(usuarios[index].email, "\n")] = '\0'; // Remove o caractere de nova linha
    
    printf("Digite o novo sexo do usuário (Feminino/Masculino/Indiferente): ");
    fgets(usuarios[index].sexo, MAX_SEXO, stdin);
    usuarios[index].sexo[strcspn(usuarios[index].sexo, "\n")] = '\0'; // Remove o caractere de nova linha
    
    printf("Digite o novo endereço do usuário: ");
    fgets(usuarios[index].endereco, MAX_ENDERECO, stdin);
    usuarios[index].endereco[strcspn(usuarios[index].endereco, "\n")] = '\0'; // Remove o caractere de nova linha
    
    printf("Digite a nova altura do usuário (em metros): ");
    scanf("%lf", &usuarios[index].altura);
    
    printf("O usuário foi vacinado? (1 - Sim / 0 - Não): ");
    scanf("%d", &usuarios[index].vacina);
    
    getchar(); // Limpa o buffer do teclado
    
    printf("Usuário editado com sucesso.\n");
}

// Função para excluir um usuário
void excluirUsuario(Usuario usuarios[], int *totalUsuarios) {
    if (*totalUsuarios == 0) {
        printf("Não há usuários cadastrados.\n");
        return;
    }
    
    int id;
    printf("Digite o ID do usuário que deseja excluir: ");
    scanf("%d", &id);
    
    int index = -1;
    for (int i = 0; i < *totalUsuarios; i++) {
        if (usuarios[i].id == id) {
            index = i;
            break;
        }
    }
    
    if (index == -1) {
        printf("Usuário não encontrado.\n");
        return;
    }
    
    for (int i = index; i < (*totalUsuarios) - 1; i++) {
        usuarios[i] = usuarios[i + 1];
    }
    
    (*totalUsuarios)--;
    
    printf("Usuário excluído com sucesso.\n");
}

// Função para buscar um usuário pelo email
void buscarUsuarioPorEmail(Usuario usuarios[], int totalUsuarios) {
    if (totalUsuarios == 0) {
        printf("Não há usuários cadastrados.\n");
        return;
    }
    
    char email[MAX_EMAIL];
    printf("Digite o email do usuário que deseja buscar: ");
    fgets(email, MAX_EMAIL, stdin);
    email[strcspn(email, "\n")] = '\0'; // Remove o caractere de nova linha
    
    int index = -1;
    for (int i = 0; i < totalUsuarios; i++) {
        if (strcmp(usuarios[i].email, email) == 0) {
            index = i;
            break;
        }
    }
    
    if (index == -1) {
        printf("Usuário não encontrado.\n");
        return;
    }
    
    printf("ID: %d\n", usuarios[index].id);
    printf("Nome completo: %s\n", usuarios[index].nomeCompleto);
    printf("Email: %s\n", usuarios[index].email);
    printf("Sexo: %s\n", usuarios[index].sexo);
    printf("Endereço: %s\n", usuarios[index].endereco);
    printf("Altura: %.2f\n", usuarios[index].altura);
    printf("Vacina: %s\n", usuarios[index].vacina == 1 ? "Sim" : "Não");
}

// Função para imprimir todos os usuários cadastrados
void imprimirUsuarios(Usuario usuarios[], int totalUsuarios) {
    if (totalUsuarios == 0) {
        printf("Não há usuários cadastrados.\n");
        return;
    }
    
    for (int i = 0; i < totalUsuarios; i++) {
        printf("ID: %d\n", usuarios[i].id);
        printf("Nome completo: %s\n", usuarios[i].nomeCompleto);
        printf("Email: %s\n", usuarios[i].email);
        printf("Sexo: %s\n", usuarios[i].sexo);
        printf("Endereço: %s\n", usuarios[i].endereco);
        printf("Altura: %.2f\n", usuarios[i].altura);
        printf("Vacina: %s\n", usuarios[i].vacina == 1 ? "Sim" : "Não");
        printf("----------------------\n");
    }
}

// Função para fazer backup dos usuários cadastrados
void fazerBackup(Usuario usuarios[], int totalUsuarios, Usuario backupUsuarios[], int *totalBackupUsuarios) {
    if (totalUsuarios == 0) {
        printf("Não há usuários cadastrados.\n");
        return;
    }
    
    for (int i = 0; i < totalUsuarios; i++) {
        backupUsuarios[i] = usuarios[i];
    }
    
    *totalBackupUsuarios = totalUsuarios;
    
    printf("Backup realizado com sucesso.\n");
}

// Função para fazer a restauração dos dados
void fazerRestauracao(Usuario usuarios[], int *totalUsuarios, Usuario backupUsuarios[], int totalBackupUsuarios) {
    if (totalBackupUsuarios == 0) {
        printf("Não há dados de backup.\n");
        return;
    }
    
    for (int i = 0; i < totalBackupUsuarios; i++) {
        usuarios[i] = backupUsuarios[i];
    }
    
    *totalUsuarios = totalBackupUsuarios;
    
    printf("Restauração realizada com sucesso.\n");
}

int main() {
    srand(time(0)); // Inicializa a semente do gerador de números aleatórios
    
    Usuario usuarios[MAX_USUARIOS];
    int totalUsuarios = 0;
    
    Usuario backupUsuarios[MAX_USUARIOS];
    int totalBackupUsuarios = 0;
    
    char opcao;
    do {
        printf("MENU\n");
        printf("----\n");
        printf("1. Adicionar usuário\n");
        printf("2. Editar usuário\n");
        printf("3. Excluir usuário\n");
        printf("4. Buscar usuário por email\n");
        printf("5. Imprimir todos os usuários cadastrados\n");
        printf("6. Fazer backup dos usuários cadastrados\n");
        printf("7. Fazer restauração dos dados\n");
        printf("8. Sair\n");
        printf("Digite a opção desejada: ");
        scanf(" %c", &opcao);
        
        getchar(); // Limpa o buffer do teclado
        
        switch (opcao) {
            case '1':
                adicionarUsuario(usuarios, &totalUsuarios);
                break;
            case '2':
                editarUsuario(usuarios, totalUsuarios);
                break;
            case '3':
                excluirUsuario(usuarios, &totalUsuarios);
                break;
            case '4':
                buscarUsuarioPorEmail(usuarios, totalUsuarios);
                break;
            case '5':
                imprimirUsuarios(usuarios, totalUsuarios);
                break;
            case '6':
                fazerBackup(usuarios, totalUsuarios, backupUsuarios, &totalBackupUsuarios);
                break;
            case '7':
                fazerRestauracao(usuarios, &totalUsuarios, backupUsuarios, totalBackupUsuarios);
                break;
            case '8':
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
        
        printf("\n");
    } while (opcao != '8');
    
    return 0;
}