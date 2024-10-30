#include<stdio.h>
#define SIZE 300
#define NOME_SIZE 71
#define TELEFONE_SIZE 19
#define MATRICULA_SIZE 11
#define NOME_MAE_SIZE 71
#define NOME_PAI_SIZE 71
#define CEP_SIZE 10

char nome[SIZE][NOME_SIZE];
char telefone[SIZE][TELEFONE_SIZE];
char matricula[SIZE][MATRICULA_SIZE];
char nomedamae[SIZE][NOME_MAE_SIZE];
char nomedopai[SIZE][NOME_PAI_SIZE];
char cep[SIZE][CEP_SIZE];
char op;

int main () {
    static int linha = 0;

    void flushInput(); {
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);}

    printf("\n------------------------------------------------------\n");
    printf("\n------------------- Menu Principal -------------------\n");
    printf("\n------------------------------------------------------\n\n");
    char a = 0;
    printf("Digite 1 para iniciar o cadastro ou outro valor para sair:\n");
    scanf(" %c", &a);
    flushInput();

    if (a == '1') { do { if (linha >= SIZE) {
        printf("Número máximo de cadastros atingido.\n");
        break; }

    printf("\nDigite o nome: ");
    fgets(nome[linha], NOME_SIZE, stdin);
    nome[linha][strcspn(nome[linha], "\n")] = 0;

    printf("\nDigite o telefone: ");
    fgets(telefone[linha], TELEFONE_SIZE, stdin);
    telefone[linha][strcspn(telefone[linha], "\n")] = 0;

    printf("\nDigite a matricula: ");
    fgets(matricula[linha], MATRICULA_SIZE, stdin);
    matricula[linha][strcspn(matricula[linha], "\n")] = 0;

    printf("\nDigite o nome da mae: ");
    fgets(nomedamae[linha], NOME_MAE_SIZE, stdin);
    nomedamae[linha][strcspn(nomedamae[linha], "\n")] = 0;

    printf("\nDigite o nome do pai: ");
    fgets(nomedopai[linha], NOME_PAI_SIZE, stdin);
    nomedopai[linha][strcspn(nomedopai[linha], "\n")] = 0;

    printf("\nDigite o CEP: ");
    fgets(cep[linha], CEP_SIZE, stdin);
    cep[linha][strcspn(cep[linha], "\n")] = 0;

    linha++;

    printf("\nDigite 1 para continuar ou outro valor para sair do cadastro: \n");
    scanf(" %c", &op);
    flushInput();

    }while(op == '1' && linha < SIZE );
    printf("\nDigite 1 para ver os dados cadastrados ou outro valor para sair\n");
    char b = 0; 
    scanf(" %c", &b);
    flushInput();

    if (b == '1') {
    printf("\n--------------- Lista de entradas ---------------\n");
    for (int i = 0; i < linha; i++) {
        printf("\n| Nome: %s %s\t| Telefone: %s\t| Matricula: %s\t| Nome da mae: %s\t| Nome do pai: %s\t| CEP: %s |\n", nome[i], telefone[i], matricula[i], nomedamae[i], nomedopai[i], cep[i]);
    }} else printf("\n"); } else printf("Obrigado por usar nosso sistema!");
  
    return 0;
}