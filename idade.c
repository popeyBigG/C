#include<stdio.h>
#include<conio.h>

void main() {

char nome[256];
int nascimento;
int idade;
const int currentAno = 2019;

printf("Introduza o seu nome\n");
scanf("%s", nome);
getchar(); 

printf("Introduza o ano de nascimento\n");
scanf(" %d", &nascimento);
getchar(); 

idade = (currentAno-nascimento);

printf("Nome: %s \tIdade: %d\n", nome, idade);

switch (idade) {
case 10 ... 12:
        printf("\nEquipas disponiveis: Equipa A\tEquipa B\n");
break;
case 13 ... 15:
      printf("\nEquipas disponiveis: Equipa B\tEquipa C\n");
break;
case 16 ... 18:
       printf("\nEquipas disponiveis: Equipa C\tEquipa D\n");
break;
default: 
        printf("Nao sao aceites inscricoes para nenhuma equipa\n");
        break;
    }
    system("pause");
}