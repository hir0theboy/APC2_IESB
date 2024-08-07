#include <stdio.h>
//Exercicio 3
int main() {
int n1 = 3, n2 =5;
int *p1, *p2;
  p1 = &n1;
  p2 = &n2;
  printf("Antes: ");
printf("n1: %d, n2: %d\n", n1, n2);

  *p1 = *p1 + *p2;  // 3+5 = 8
  *p2 = *p1 - *p2;  //8 - 5 = 3 (valor de n1)
  *p1 = *p1 - *p2; // 8 - 3 = 5 (valor de n2)
printf("Depois: ");
  printf("n1: %d, n2: %d\n", n1, n2);
  return 0;
}