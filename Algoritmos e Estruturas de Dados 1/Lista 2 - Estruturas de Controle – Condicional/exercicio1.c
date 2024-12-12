#include <stdio.h>

int main(void) {
  int num1 = 0;
  int num2 = 0;

  printf("Digite dois numeros numero:  \n");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2) {
    printf("O primeiro numero eh maior que o segundo");
  }

  else if (num2 > num1) {
    printf("O segundo numero eh maior que o primeiro");
  }

  else {
    puts("Os dois numeros sao iguais");
  }

  return 0;
}