#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float nota;

    printf("=== Sistema de Cadastro de Alunos ===\n");
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]s", nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a nota: ");
    scanf("%f", &nota);

    // Funcionalidade de exibicao adicionada no segundo commit
    printf("\n=== Dados do Aluno Cadastrado ===\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Nota: %.2f\n", nota);

    return 0;
}
