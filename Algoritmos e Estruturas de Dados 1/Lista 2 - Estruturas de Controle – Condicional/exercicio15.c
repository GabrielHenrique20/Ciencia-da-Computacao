#include <stdio.h>

int main(void) {
  float peso_pessoa = 0.0;
  int codigo = 0;
  float peso_planeta = 0.0;

  printf("\n1. Mercurio\n\n");
  printf("2. Venus\n\n");
  printf("3. Marte\n\n");
  printf("4. Jupiter\n\n");
  printf("5. Saturno\n\n");
  printf("6. Urano\n\n");

  printf("Digite seu peso:  \n");
  scanf("%f", &peso_pessoa);

  printf("Digite o codigo de qual planeta quer saber seu peso:  \n");
  scanf("%d", &codigo);

  switch (codigo) {

  case 1:
    peso_planeta = peso_pessoa * 0.37;
    printf("Seu peso em Mercurio eh:  %.2fkg", peso_planeta);
    break;

  case 2:
    peso_planeta = (peso_pessoa / 10) * 0.88;
    printf("Seu peso em Venus eh:  %.2fkg", peso_planeta);
    break;

  case 3:
    peso_planeta = (peso_pessoa / 10) * 0.38;
    printf("Seu peso em Marte eh:  %.2fkg", peso_planeta);
    break;

  case 4:
    peso_planeta = (peso_pessoa / 10) * 2.64;
    printf("Seu peso em Jupiter eh:  %.2fkg", peso_planeta);
    break;

  case 5:
    peso_planeta = (peso_pessoa / 10) * 1.15;
    printf("Seu peso em Saturno eh:  %.2fkg", peso_planeta);
    break;

  case 6:
    peso_planeta = (peso_pessoa / 10) * 1.17;
    printf("Seu peso em Urano eh:  %.2f", peso_planeta);
    break;
  }
  return 0;
}