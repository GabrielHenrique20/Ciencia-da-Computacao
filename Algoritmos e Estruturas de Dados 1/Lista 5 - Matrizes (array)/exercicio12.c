#include <stdio.h>

int main() {
  float notas[15][5];
  int numeros_chamada[15];
  float media = 0.0;

  // Recebe as notas de cada aluno
  printf("\nInsira as notas de cada aluno: \n");
  for (int i = 0; i < 15; i++) {
    printf("\nNotas do aluno %d: ", i + 1);
    for (int j = 0; j < 5; j++) {
      scanf("%f", &notas[i][j]);
    }
  }

  // Recebe os números de chamada dos alunos
  printf("\nInsira os números de chamada dos alunos:\n");
  for (int i = 0; i < 15; i++) {
    printf("\nNúmero de chamada do aluno %d: ", i + 1);
    scanf("%d", &numeros_chamada[i]);
  }

  // Calcula e exibe a média das notas de cada aluno e a situação
  printf("\nMédia de cada aluno:  \n");
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 5; j++) {
      media += notas[i][j];
    }
    media /= 5;
    printf("Aluno %d: Média %.2f - ", numeros_chamada[i], media);
    if (media >= 7.0) {
      printf("Aprovado\n");
    } else if (media < 4.0) {
      printf("Reprovado\n");
    } else {
      printf("Exame Especial\n");
    }
  }

  // Calcula e exibe a média de cada prova
  printf("\nMédia de cada prova:\n");
  for (int j = 0; j < 5; j++) {
    for (int i = 0; i < 15; i++) {
      media += notas[i][j];
    }
    media /= 15;
    printf("Prova %d: Média %.2f\n", j + 1, media);
  }

  return 0;
}