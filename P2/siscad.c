#include<stdio.h>
#define SIZE 300
char nome [SIZE][31];
char sobrenome [SIZE][31];
unsigned long telefone [SIZE];
unsigned long matricula [SIZE];
int op;

int main () {
    static int linha = 0;
    do {
    printf("\nDigite o nome: ");
    scanf("%30s", nome[linha]);

    printf("\nDigite o sobrenome: ");
    scanf("%30s", sobrenome[linha]);

    printf("\nDigite o telefone: ");
    scanf("%12lu", telefone[linha]);

    printf("\nDigite a matricula: ");
    scanf("%11lu", matricula[linha]);

    printf("\nDigite 1 para continuar ou outro valor para sair: \n");
    scanf("%i", &op);

    printf("\n%12lu\n", telefone[linha]);

    printf("\n%s\t%s\n", nome[linha], sobrenome[linha]);

    printf("\n%11lu\n", matricula[linha]);

    linha++;
    }while(op == 1 && linha < SIZE );

    //for (int i = 0; i < linha; i++){
    //    printf("\n%s\t%s\t%s\t%s\n", nome[i], sobrenome[i], telefone[i], matricula[i]);
    //}
  
    return 0;
}