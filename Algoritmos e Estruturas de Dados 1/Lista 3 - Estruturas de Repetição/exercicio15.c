#include <stdio.h>

int main(void) {
  int i = 0;
  int n1 = 1;
  int n2 = 1;
  int n3 = n1 + n2;
  int N = 0;

  // possui o numeral 1 como o primeiro e o segundo termo da ordem, e os
  // elementos seguintes são originados pela soma de seus dois antecessores

  printf("\nDigite uma quantidade de valor:  \n");
  scanf("%d", &N);

  printf("%d ", n1);
  printf("%d ", n2);

  while (n3 <= N) {

    printf("%d ", n3);
    n1 = n2;
    n2 = n3;
    n3 = n1 + n2;
  }

  return 0;
}