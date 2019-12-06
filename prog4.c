/*Programa que aceite 2 inputs*/
/*Imprimir numero 1 e numero 2 introduzido*/
/*Mostre a soma dos 2*/

#include <stdio.h>

int main() {

    /*Variavel*/
    int num1;
    int num2;
    int soma;

    /*Input/Output para o user*/
    printf("Insira o 1º numero: ");
    scanf("%d", &num1);

    printf("Insira 2º numero: ");
    scanf("%d", &num2);

    soma = (num1 + num2);

    /*Output do resultado*/
    printf("Valor n1 = %d e valor n2 = %d, soma = %d\n", num1, num2, soma);

    return 0;
}