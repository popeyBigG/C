/*Calcular Salário Bruto, Imposto e Salário Líquido*/

#include <stdio.h>

float calctaxa(float salarioBruto) {

    float taxa;

    if (salarioBruto < 1000) {
        taxa = 0.05;
    } else if (salarioBruto >= 1000 && salarioBruto <= 5000) {
        taxa = 0.11;
    } else {
        taxa = 0.35;
    }
    return(taxa);
}

float calc(float salarioBruto, float taxa) {

    float salarioLiquido;
          salarioLiquido = salarioBruto - (salarioBruto * taxa);
          return(salarioLiquido);
}

int main() {

    /*Variavel*/
    char nome[1000];
    float salarioBruto;
    float taxa;
    float salarioLiquido;

    /*Input/Output para o user*/
    printf("Nome: ");
    scanf("%s", nome);

    printf("Salário Bruto: ");
    scanf("%f", &salarioBruto);
    
    taxa = calctaxa(salarioBruto);

    /*Output do resultado*/
    printf("\nNome: %s\nTaxa: %f\nSalário Líquido: %f\n", nome, taxa, calc(salarioBruto, taxa));

    return 0;
}