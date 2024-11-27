#include <stdio.h>
#include <string.h>

#define SIZE 300
#define NOME_SIZE 71
#define TELEFONE_SIZE 19
#define MATRICULA_SIZE 11
#define NOME_MAE_SIZE 71
#define NOME_PAI_SIZE 71
#define CEP_SIZE 10

struct Cadastro {
    char nome[NOME_SIZE];
    char telefone[TELEFONE_SIZE];
    char matricula[MATRICULA_SIZE];
    char nomedamae[NOME_MAE_SIZE];
    char nomedopai[NOME_PAI_SIZE];
    char cep[CEP_SIZE];
};

int main() {
    struct Cadastro cadastros[SIZE];
    int linha = 0;
    char op;

    printf("\n----------------------------------------------------------------\n");
    printf("\n------------------------ Menu Principal ------------------------\n");
    printf("\n----------------------------------------------------------------\n\n");

    do {
        printf("Digite 1 para iniciar o cadastro ou 0 para sair:\n");
        scanf(" %c", &op);
        getchar();

        if (op == '1') {
            if (linha >= SIZE) {
                printf("Número máximo de cadastros atingido.\n");
                break;
            }

            printf("\nDigite seu nome: ");
            fgets(cadastros[linha].nome, NOME_SIZE, stdin);
            cadastros[linha].nome[strcspn(cadastros[linha].nome, "\n")] = 0;

            printf("\nDigite o telefone: ");
            fgets(cadastros[linha].telefone, TELEFONE_SIZE, stdin);
            cadastros[linha].telefone[strcspn(cadastros[linha].telefone, "\n")] = 0;

            printf("\nDigite a matricula: ");
            fgets(cadastros[linha].matricula, MATRICULA_SIZE, stdin);
            cadastros[linha].matricula[strcspn(cadastros[linha].matricula, "\n")] = 0;

            printf("\nDigite o nome da mae: ");
            fgets(cadastros[linha].nomedamae, NOME_MAE_SIZE, stdin);
            cadastros[linha].nomedamae[strcspn(cadastros[linha].nomedamae, "\n")] = 0;

            printf("\nDigite o nome do pai: ");
            fgets(cadastros[linha].nomedopai, NOME_PAI_SIZE, stdin);
            cadastros[linha].nomedopai[strcspn(cadastros[linha].nomedopai, "\n")] = 0;

            printf("\nDigite o CEP: ");
            fgets(cadastros[linha].cep, CEP_SIZE, stdin);
            cadastros[linha].cep[strcspn(cadastros[linha].cep, "\n")] = 0;

            linha++;

            printf("\nDigite 1 para continuar ou 0 para sair do cadastro: \n");
            scanf(" %c", &op);
            getchar();

        }

    } while (op == '1' && linha < SIZE);

    printf("\nDigite 1 para ver os dados cadastrados ou 0 para sair:\n");
    char b = 0;
    scanf(" %c", &b);
    getchar();

    if (b == '1') {
        printf("\n-----------------------------------------------------------\n");
        printf("\n-------------------- Lista de entradas --------------------\n");
        printf("\n-----------------------------------------------------------\n");
        for (int i = 0; i < linha; i++) {
            printf("| Nome: %s\t| Telefone: %s\t| Matricula: %s\t| Nome da mae: %s\t| Nome do pai: %s\t| CEP: %s |\n",
                   cadastros[i].nome, cadastros[i].telefone, cadastros[i].matricula,
                   cadastros[i].nomedamae, cadastros[i].nomedopai, cadastros[i].cep);
        }
    } else {
        printf("\nObrigado por usar nosso sistema!\n");
    }

    return 0;
}