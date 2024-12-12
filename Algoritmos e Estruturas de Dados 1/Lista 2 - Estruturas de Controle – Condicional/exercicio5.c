#include <math.h>
#include <stdio.h>

int main(void) {
  int numero1 = 0;
  int numero2 = 0;
  int soma = 0;
  int raiz = 0;
  int opcao = 0;

  printf("1. Somar dois numeros");
  printf("2. raiz quadrada de um numero");
  printf("Digite a opcao desejada:  ");
  scanf("%d", &opcao);

  if (opcao == 1) {
    printf("Digite dois numeros:  \n");
    scanf("%d %d", &numero1, &numero2);
    soma = numero1 + numero2;
    printf("A soma dos numeros %d e %d eh:  %d\n", numero1, numero2, soma);
  }

  else if (opcao == 2) {
    printf("Digite um numero:  \n");
    scanf("%d", &numero1);
    raiz = sqrt(numero1);
    printf("A raiz quadrada do numero %d eh:  %d\n", numero1, raiz);
  }

  else {
    puts("Opcao invalida");
  }

  return 0;
}