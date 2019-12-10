/*Calcular taxa IRS*/

/* Pedir nome, saber se é solteiro por exemplo*/

/*Casos nao existentes (9%)*/

#include <stdio.h>
#include <conio.h>
#include <time.h>

void delay(int milliseconds);

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}

char nome() {
    char nome[256];

    printf("Insira seu nome: ");
    scanf("%s", &nome);
    getchar(); 

    return nome;
}

char pergunta() {

    system("cls");
    char c;
    char estadoC[256] = "Unknown";
    
    printf("Selecione o seu estado civil:\n");

    printf(R"EOF(
+----------------------------------+---------+
|             Estado civil         |  Sigla  | 
+----------------------------------+---------+
| 1 - Solteiro                     |   (S)   |
| 2 - Casado                       |   (C)   |
| 3 - Uniao                        |   (U)   |
| 4 - Divorciado                   |   (D)   |
| 5 - Outro                        |   (O)   |
+----------------------------------+---------+
    )EOF");

    c = getchar(); 
    
    if (c == 's' || c == 'S') {
        printf("\nS foi apertado");
    } else if (c == 'c' || c == 'C') {
        printf("\nC foi apertado\n");
    } else if (c == 'u' || c == 'U') {
        printf("\nU foi apertado\n");
    } else if (c == 'd' || c == 'D') {
        printf("\nD foi apertado\n");
    } else if (c == 'o' || c == 'O') {
        printf("\nO foi apertado\n");
    } else {
        printf("Por favor, pressione uma tecla valida!\n");
        delay(1000);
        pergunta();
    }

    printf("\nSelecionado: (%s)\n", estadoC);

    return(pergunta); 
}

char main() {

    char escolha;

    printf("Deseja iniciar o programa? (Y/N)");
    scanf("%c", &escolha);

    if (escolha == 'Y') {
        nome();
        pergunta();
        system("pause");
    } else {
        system("pause");
    }

    return 0;
}

