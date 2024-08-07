#include <stdio.h>
//exercicio 2
int main() {
int numero; 
int *p; 
p = &numero;
*p = 5;
  printf("numero = %d\n", numero);
  return 0;
}