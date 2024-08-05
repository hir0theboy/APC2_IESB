#include <stdio.h> 

// S
// 0|111 1111 1111 1111
//     F    F    F    F
//     7    F    F    F
// +1
// 1|000 0000 0000 0000
//     8    8    8    8

int main() {
  short int numero = 0x7FFF;
  printf("tamanho em bytes de numero: %ld\n", sizeof(numero)); //sizeof mostra o tamanho em bytes de uma variavel
  printf("tamanho em bytes de int: %ld\n", sizeof(int));
  printf("tamanho em bytes de short int: %ld\n", sizeof(short int));
  printf("tamanho em bytes de long int: %ld\n", sizeof(long int));
  printf("numero: %d (%X)\n", numero, numero);
  numero++;
  printf("numero: %d (%X)\n", numero, numero);
  return 0;
}
