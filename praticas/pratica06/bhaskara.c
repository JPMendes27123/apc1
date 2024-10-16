#include <stdio.h>
#include <math.h>

int main () { 
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Entre com o valor de a:\n");
    int deu_certo = scanf("%i", &a);

    printf("Entre com o valor de b\n");
    int deu_certo2 = scanf("%i", &b);

    printf("Entre com o valor de c:\n");
    int deu_certo3 = scanf("%i", &c);

    int delta = b*b - 4*a*c;

    printf("%i\n", delta);

    if (delta < 0) {
        printf("A equacao nao tem raizes reais\n");
    } else if (delta >= 0) {
        float x1 = (-b + sqrt(delta))/(2*a);
        float x2 = (-b - sqrt(delta))/(2*a);
        printf("As raizes da equacao sao ");
        printf("x1 = %.2f e ", x1);
        printf("x2 = %.2f\n", x2);

    }
    
    
return 0;
}    