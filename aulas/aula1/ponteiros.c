#include <stdio.h> 
//ponteiros armazenam o endereço de memória de outra variável
//para acessar o endereço eh so usar ptr_x, para acessar o valor eh so usar *ptr_x

int main() {
 int x = 5;
 float pi = 3.14;
 int *ptr_x; //declarando o ponteiro usando *
 int *ptr_pi;
 ptr_x = &x; //declarando que o ponteiro ptr_x aponta para a variável x
 printf("&x = %p, x: %d\n", &x, x);
  printf("&ptr_x: %p, ptr_x: %p, *ptr_x: %d\n", &ptr_x, ptr_x, *ptr_x);
  
//resultado:
  //./a.out
  //&x = 0x7ffccdbb6998, x: 5
  //&ptr_x: 0x7ffccdbb6990, ptr_x: 0x7ffccdbb6998, *ptr_x: 5

//Como alterar o valor de x atraves do ponteiro?
  *ptr_x = 7; //acessa o endereço de x e altera o valor de x
  printf("(endereço de x) &x = %p, valor de x: %d\n", &x, x); 

  //resultado:
//./a.out
  //&x = 0x7ffce5785c98, x: 5
  //&ptr_x: 0x7ffce5785c90, ptr_x: 0x7ffce5785c98, *ptr_x: 5
  //(endereço de x) &x = 0x7ffce5785c98, valor de x: 7
  
  return 0;
}