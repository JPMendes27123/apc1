#include<stdio.h>
#define SIZE 300

char nome [SIZE][31];
char sobrenome [SIZE][31];
char telefone [SIZE][12];
char matricula [SIZE][11];
char nomedamae [SIZE][31];
char nomedopai [SIZE][31];
char cep [SIZE][10];
char op;

int main () {
    static int linha = 0;

    void flushInput() {
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
    scanf("%30s", nome[linha]);
    flushInput();

    printf("\nDigite o sobrenome: ");
    scanf("%30s", sobrenome[linha]);
    flushInput();

    printf("\nDigite o telefone: ");
    scanf("%11s", telefone[linha]);
    flushInput();

    printf("\nDigite a matricula: ");
    scanf("%10s", matricula[linha]);
    flushInput();

    printf("\nDigite o nome da mae: ");
    scanf("%30s", nomedamae[linha]);
    flushInput();

    printf("\nDigite o nome do pai: ");
    scanf("%30s", nomedopai[linha]);
    flushInput();

    printf("\nDigite o CEP: ");
    scanf("%9s", cep[linha]);
    flushInput();

    printf("\nDigite 1 para continuar ou outro valor para sair: \n");
    scanf(" %c", &op);
    flushInput();

    linha++;
    }while(op == '1' && linha < SIZE );
    printf("\nDigite 1 para ver os dados cadastrados ou outro valor para sair\n");
    char b = 0; 
    scanf(" %c", &b);
    flushInput();

    if (b == '1') {
    printf("\n--------------- Lista de entradas ---------------\n");
    for (int i = 0; i < linha; i++) {
        printf("\n| Nome: %s %s\t| Telefone: %s\t| Matricula: %s\t| Nome da mae: %s\t| Nome do pai: %s\t| CEP: %s |\n", nome[i], sobrenome[i], telefone[i], matricula[i], nomedamae[i], nomedopai[i], cep[i]);
    }} else printf("\n"); } else printf("Obrigado por usar nosso sistema!");
  
    return 0;
}