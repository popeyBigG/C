/*Criar programa que aceita 1 input*/
/*Declarar uma variavel tipo int nome: lst*/
/*Texto "Insira numero:"*/
/*Usar função scanf();*/
/*Printf do valor introduzido*/

#include <stdio.h>

int main() {

    /*Variavel*/
    char lst[100];

    /*Input/Output para o user*/
    printf("Insira numero: ");
    scanf("%s", lst);

    /*Output do resultado*/
    printf("Numero inserido: %s\n", lst);

    return 0;
}