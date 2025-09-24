#include <stdio.h>
#include <string.h>


struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
   
    struct Territorio territorios[5];

    for (int i = 0; i < 5; i++) {
        printf("=== Cadastrando Território %d ===\n", i + 1);

        // Entrada do nome do território
        printf("Nome do território: ");
        scanf(" %[^\n]", territorios[i].nome);  
        // %[^\n] permite ler strings com espaços

        // Entrada da cor do exército
        printf("Cor do exército(ex: Azul, Verde): ");
        scanf(" %s", territorios[i].cor);  

        // Entrada da quantidade de tropas
        printf("Número de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("\nCadastro inicial concluido com sucesso!\n");
    
    printf("\n================================\n");
    printf("\nMAPA DO MUNDO - ESTADO ATUAL\n");
    printf("\n================================\n");
    
    for (int i = 0; i < 5; i++) {
        printf("TERRITORIO %d:\n", i + 1);
        printf(" - Nome: %s\n", territorios[i].nome);
        printf(" - Dominado por: Exercito %s\n", territorios[i].cor);
        printf(" - Tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}

