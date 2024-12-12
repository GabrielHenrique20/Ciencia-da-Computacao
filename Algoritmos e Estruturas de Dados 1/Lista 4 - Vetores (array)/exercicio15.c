
#include <stdio.h>

int main(void) {
  int vetor[20];
  int i = 0;
  int j = 0;

  // preencher vetor
  printf("\nDigite um numero:  \n");
  for (i = 0; i < 20; i++) {
    scanf("%d", &vetor[i]);
  }

  // imprimir vetor preenchido
  printf("\nVetor completo:  ");
  for (i = 0; i < 20; i++) {
    printf("%d\t", vetor[i]);
  }

  printf("\n\n");

  // ver se tem elementos repetidos e imprimi-los
  printf("\nElementos repetidos são os numeros:  \n");
  for (i = 0; i < 19; i++) {
    for (j = i + 1; j < 20; j++) {
      if (vetor[i] == vetor[j]) {
        printf("%d\t", vetor[i]);
        break;
      }
    }
  }

  return 0;
}

// se não tivesse esse for (o do j) , sempre seria verdadeiro pois
// vetor[1] e vetor[1] iam sempre ser iguais nessa posição, por
// isso temos que comparar sempre um vetor[x] com a sua posição
// seguinte: vetor[x + 1], que ai comparar (vetor[0] é igual
// vetor[1]? e assim por diante aumentando de um em um as duas
// posições)