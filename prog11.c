#include <stdio.h>

int numero13;

int numero(void) { 
                printf("Insira um número de 1-3: ");
                scanf("%d", &numero13);

                if (numero13 == 1) {
                    printf("TIS\n");       
                } else if (numero13 == 2) {
                    printf("TIIGR\n");
                } else if (numero13 == 3) {
                    printf("GRSI\n");
                } else { printf("Por favor, introduza um numero de 1-3\n");
                         numero();
                }
}

int main(void) {

    int escolha;

    char nome[256];
    int idade;
    int num1, num2;
    int soma;

    //Menu//
    printf("Escolha uma opção correspondente aos numeros: \n");
    printf("1 - Formadores\t2 - Alunos\n3 - Cursos\t4 - Apoios\n5 - Sair\n");

    //Input escolha//
    printf("\nEscolha: ");
    scanf(" %d", &escolha);

    switch (escolha) {
        case 1:
                printf("Menu formadores selecionado\n");
                break;
        case 2:
                printf("Insira o nome: ");
                scanf("%s", nome);

                printf("Insira a idade: ");
                scanf(" %d", &idade);

                printf("Aluno %s tem %d anos\n", nome, idade);
                break;
        case 3: 
                numero();
                break;
        case 4:
                printf("Insire num1: ");
                scanf("%d", &num1);

                printf("Insire num2: ");
                scanf(" %d", &num2);

                soma = (num1 + num2);

                if (soma > 20) {
                printf("Soma: %d\tAtingiu limite!\n", soma);
                } else { printf("Soma: %d\n", soma); }
                break;

        default: 
                printf("Terminando o programa...\n");
                break;
    }

} 

