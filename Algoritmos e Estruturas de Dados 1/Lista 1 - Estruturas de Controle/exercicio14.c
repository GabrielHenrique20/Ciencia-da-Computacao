#include <stdio.h>

int main(void) {
  float precoProduto = 0;
  float desconto = 0;
  float aumento = 0;

  printf("Digite o preco de um produto:  \n");
  scanf("%f", &precoProduto);

  desconto = precoProduto * 0.90;
  aumento = precoProduto * 1.20;

  printf("Desconto =  %2.2f", desconto);
  printf("\nAumento =  %2.2f", aumento);

  return 0;
}