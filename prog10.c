#include <stdio.h>

const int valor = 15;

int num1, num2;

int main(void) {
    printf("Insira o 1º valor\n");
    scanf("%d", &num1);

    printf("Insira o 2º valor\n");
    scanf("%d", &num2);

    if (num1 > num2 && num1 > valor) {
        printf("%d é maior que %d e %d\n", num1, num2, valor);
    } else if (num2 > num1 && num2 > valor) {
        printf("%d é maior que %d e %d\n", num2, num1, valor);
    } else if (valor > num2 && valor > num1) {
        printf("%d é maior que %d e %d\n", valor, num1, num2);
                 //Condições diferentes//
    } else if (valor == num1 && num1 == num2) {
        printf("%d %d e %d sao iguais\n", valor, num1, num2);
    } else if (num1 == num2) {
        printf("%d e %d sao iguais\n", num1, num2);
    } else if (num1 > valor && num2 > valor) {
        printf("%d é maior que %d e %d é maior que %d\n", num1, valor, num2, valor);
    } else if (num1 < valor && num2 < valor) {
        printf("%d é menor que %d e %d é menor que %d\n", num1, valor, num2, valor);
    } else {
        printf("Nenhuma condiçao possivel");
    }
}

