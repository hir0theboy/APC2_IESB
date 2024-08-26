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
  struct Pessoa *p_pessoa;
  p_pessoa = &pessoa1;

  
  printf("Nome: %s\n", (*p_pessoa).nome);
  printf("Idade: %d\n", (*p_pessoa).idade);
  printf("Genero: %c\n", (*p_pessoa).genero);

  // OU UTILIZANDO SETAS

  printf("Nome: %s\n", p_pessoa->nome);
  printf("Idade: %d\n", p_pessoa->idade);
  printf("Genero: %c\n", p_pessoa->genero);


 
  return 0;
}