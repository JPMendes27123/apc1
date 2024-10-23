#include<stdio.h>
#define SIZE 300
char nome [SIZE][31];
char sobrenome [SIZE][31];
char telefone [SIZE][12];
char matricula [SIZE][11];
char nomedamae [SIZE][31];
char nomedopai [SIZE][31];
char cep [SIZE][10];
int op;

int main () {
    static int linha = 0;
    do {
    printf("\nDigite o nome: ");
    scanf("%30s", nome[linha]);

    printf("\nDigite o sobrenome: ");
    scanf("%30s", sobrenome[linha]);

    printf("\nDigite o telefone: ");
    scanf("%11s", telefone[linha]);

    printf("\nDigite a matricula: ");
    scanf("%10s", matricula[linha]);

    printf("\nDigite o nome da mae: ");
    scanf("%30s", nomedamae[linha]);

    printf("\nDigite o nome do pai: ");
    scanf("%30s", nomedopai[linha]);

    printf("\nDigite o CEP: ");
    scanf("%9s", cep[linha]);

    printf("\nDigite 1 para continuar ou outro valor para sair: \n");
    scanf("%i", &op);

    //printf("\n%s\n", telefone[linha]);

    //printf("\n%s\t%s\n", nome[linha], sobrenome[linha]);

    //printf("\n%s\n", matricula[linha]);

    linha++;
    }while(op == 1 && linha < SIZE );

    printf("\n-------------------------------------------------\n");
    printf("\n--------------- Lista de entradas ---------------\n");
    for (int i = 0; i < linha; i++) {
        printf("\n| Nome: %s %s\t| Telefone: %s\t| Matricula: %s\t| Nome da mae: %s\t| Nome do pai: %s\t| CEP: %s |\n", nome[i], sobrenome[i], telefone[i], matricula[i], nomedamae[i], nomedopai[i], cep[i]);
    }
  
    return 0;
}