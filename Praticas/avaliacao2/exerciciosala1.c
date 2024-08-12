
 #include <stdio.h>

int main (void){
  int n = 1025;
  char *p_c = (char*)&n;

  printf("Byte 1: %d\n", *p_c);
  printf("Byte 2: %d\n", *(p_c+1));
  printf("Byte 3: %d\n", *(p_c+2));
  *(p_c+2) = 1;
  printf("Após modificação do byte 3:");
  printf("Byte 1: %d\n", *p_c);
  printf("Byte 2: %d\n", *(p_c+1));
  printf("Byte 3: %d\n", *(p_c+2));
  printf("n: %d\n", n);

  return 0;
}