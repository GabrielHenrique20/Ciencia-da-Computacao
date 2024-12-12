#include <stdio.h>

int main(void) {
  int a, b;

  int *p1;
  int *p2;

  printf("\nDigite dois inteiros: \n");
  scanf("%d %d", &a, &b);

  p1 = &a;
  p2 = &b;

  if (p1 > p2) {
    printf("\nEndereço de A é maior, tendo endereço %p", p1);
  }

  else {
    printf("\nEndereço de B é maior, tendo endereço %p", p2);
  }
  return 0;
}