#include <stdio.h>

int main() {
printf("sizeof(int) = %d\n", sizeof(int)); //inteiro ocupa 4 bytes, endereço vai de 4 em 4
printf("sizeof(float) = %d\n", sizeof(float)); //float ocupa 4 bytes, endereço vai de 4 em 4
printf("sizeof(double) = %d\n", sizeof(double)); //double ocupa 8 bytes, endereço vai de 8 em 8
printf("sizeof(char) = %d\n", sizeof(char)); //char ocupa 1 bytes, endereço vai de 1 em 1

  
int inteiro = 100; //&inteiro = 0x100
  printf("i: %d, i+1: %d, i+20: %d\n", inteiro, inteiro+1, inteiro+20);
  printf("i: %d, i-1: %d, i-20: %d\n", inteiro, inteiro-1, inteiro-20);

int *pint = &inteiro;
  printf("pint: %ul, pint+1: %ul, pint+20: %ul\n", pint, pint+1, pint+20); //como o inteiro ocupa 4 bytes, a soma nao vai de 1 em 1, vai de 4 em 4
  printf("pint: %ul, pint-1: %ul, pint-20: %ul\n", pint, pint-1, pint-20);

  float *pfloat = (float *)&inteiro; 
  printf("pfloat: %ul, pfloat+1: %ul, pfloat+20: %ul\n", pfloat, pfloat+1, pfloat+20);
  printf("pfloat: %ul, pfloat-1: %ul, pfloat-20: %ul\n", pfloat, pfloat-1, pfloat-20);

  double *pdouble = (double *)&inteiro; 
  printf("pdouble: %ul, pdouble+1: %ul, pdouble+20: %ul\n", pdouble, pdouble+1, pdouble+20);
  printf("pdouble: %ul, pdouble-1: %ul, pdouble-20: %ul\n", pdouble, pdouble-1, pdouble-20);

  char *pchar = (char *)&inteiro; 
  printf("pchar: %ul, pchar+1: %ul, pchar+20: %ul\n", pchar, pchar+1, pchar+20);
  printf("pchar: %ul, pchar-1: %ul, pchar-20: %ul\n", pchar, pchar-1, pchar-20);
  
  return 0;
}