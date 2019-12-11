#include <stdio.h>

char main() {

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

    char estadoCivil[256];
    char tecla;

    printf("Insire uma sigla conforme o seu estado civíl\n");
    scanf("%c", &tecla);

    if (tecla == 'C' || tecla == 'c') {
        estadoCivil == "Solteiro";
    }

    printf("\nEstado civil selecionado: %s\n", estadoCivil);
}