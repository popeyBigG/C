#include <stdio.h>

int soma(int num1, int num2) {
    
        int resultado;
        resultado = (num1 + num2);
        return(resultado);
}

int main() {
    int num1, num2;

    printf("Insira o 1º número: ");
    scanf("%d", &num1);

    printf("Insira o 2º número: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", soma(num1, num2));

    return 0;
}