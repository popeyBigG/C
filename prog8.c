/*Calcular taxa IRS*/

/* Pedir nome, saber se é solteiro*/

/*Casos nao existentes (9%)*/

#include <stdio.h>

int main() {

    char nome[256];
    char estadoC[256] = "MeuPauSolteiro";

    printf("Insira seu nome: ");
    scanf("%s", nome);
    system("clear");

    printf("Selecione o seu estado civíl:\n");

    printf("\n1 - Solteiro (S)\n");
    printf("2 - Casado (C)\n");
    printf("3 - União (U)\n");
    printf("4 - Divorciado (D)\n");

    printf("\nSelecionado: [%s]\n", estadoC);
}

int definirTaxa() {

}