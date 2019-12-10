/*Calcular taxa IRS*/

/* Pedir nome, saber se é solteiro por exemplo*/

/*Casos nao existentes (9%)*/

#include <stdio.h>
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
    scanf("%s", nome);
    getchar(); 

    return nome;
}

char pergunta() {

    system("clear");
    char nome[256];
    char c;
    
    printf("Selecione o seu estado civil:\n");

    printf("Digite a sigla conforme o estado civil e pressione ENTER:\n");

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
        system("clear");
        printf("\nNome: %s\nEstado civil: Solteiro\nTaxa: 25%\n", nome);
    } else if (c == 'c' || c == 'C') {
        system("clear");
        printf("\nNome: %s\nEstado civil: Casado\nTaxa: 22%\n", nome);
    } else if (c == 'u' || c == 'U') {
        system("clear");
        printf("\nNome: %s\nEstado civil: Uniao\nTaxa: 19%\n", nome);
    } else if (c == 'd' || c == 'D') {
        system("clear");
        printf("\nNome: %s\nEstado civil: Divorciado\nTaxa: 18%\n", nome);
    } else if (c == 'o' || c == 'O') {
        system("clear");
        printf("\nNome: %s\nNome: %s\nEstado civil: Outro\nTaxa: 9%\n", nome);
    } else {
        printf("Por favor, pressione uma tecla valida!\n");
        delay(1000);
        pergunta();
    }

    return(pergunta); 
}

char main() {

    char escolha;

    printf("Deseja iniciar o programa? (Y/N)");
    scanf("%c", &escolha);

    if (escolha == 'Y') {
        nome();
        pergunta();
    } else {
        
    }

    return 0;
}

