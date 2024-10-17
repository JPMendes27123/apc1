#include <stdio.h>
#include <math.h>

int main () { 
    char operacao = 0;
    printf("Escolha a operacao desejada:\n");
    int deu_certo = scanf("%c", &operacao);
    float n1 = 0;
    printf("Escolha o primeiro numero:\n");
    int deu_certo1 = scanf("%f", &n1);
    float n2 = 0;
    printf("Escolha o segundo numero:\n");
    int deu_certo2 = scanf("%f", &n2);
    if (operacao == '+') {
            printf("%.2f + %.2f = %.2f", n1, n2, n1+n2);
    } else if (operacao == '-') { 
            printf("%.2f - %.2f = %.2f", n1, n2, n1-n2);
    } else if (operacao == '*') {
            printf("%.2f * %.2f = %.2f", n1, n2, n1*n2);
    } else if (operacao == '/') {
        if (n2 == 0) { printf("Nao eh possivel fazer a divisao por zero");
        } else   printf("%.2f / %.2f = %.2f", n1, n2, n1/n2);
    } else printf("Operacao invalida");
        printf("Teste");
        printf("Alo");
    return 0;
}