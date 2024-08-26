#include <stdio.h>
#include <string.h>
int main () {
  struct Pessoa {
  char nome[100];
  int idade;
  char genero;
  char byte1, byte2;
} pessoa2;

  struct Pessoa pessoa1 = {"João", 30, 'M'};

  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Genero: %c\n", pessoa1.genero);

  printf("Escreva um nome:\n");
    //gets(pessoa2.nome);
  int deu_certo = scanf("%[^\n]s", pessoa2.nome);
  printf("Escreva a idade:\n");
     deu_certo = scanf("%d", &pessoa2.idade);
  getchar();
  printf("Escreva o genero:\n");
    deu_certo = scanf("%c", &pessoa2.genero);

  printf("Nome: %s\n", pessoa2.nome);
  printf("Idade: %d\n", pessoa2.idade);
  printf("Genero: %c\n", pessoa2.genero);
 
  return 0;
}