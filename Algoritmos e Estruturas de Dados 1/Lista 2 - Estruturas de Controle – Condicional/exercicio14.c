#include <stdio.h>

int main(void) {
  int N1 = 0;
  int N2 = 0;

  printf("Digite dois numeros:  \n");
  scanf("%d %d", &N1, &N2);

  if (N1 > N2) {

    N1 = N1 - 10;
    N2 = N1 + 10;

    printf("N1 =  %d\n", N1);
    printf("N2 =  %d\n", N2);
  }

  else {

    printf("N1 eh menor que N2");
  }
  return 0;
}