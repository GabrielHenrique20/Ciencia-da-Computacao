#include <stdio.h>

int main(void) {
  int voto;
  double porcentagem = 0;
  int totalCandidatos = 0;
  int totalCandidatos1 = 0;
  int totalCandidatos2 = 0;
  int totalCandidatos3 = 0;
  int totalCandidatos4 = 0;
  int totalNulos = 0;
  int votosBrancos = 0;

  while (voto != 0) {
    printf("\nDigite o código do candidato:  \n");
    scanf("%d", &voto);

    switch (voto) {

    case 1:
      totalCandidatos1++;
      totalCandidatos++;
      break;

    case 2:
      totalCandidatos2++;
      totalCandidatos++;

      break;

    case 3:
      totalCandidatos3++;
      totalCandidatos++;

      break;

    case 4:

      totalCandidatos4++;
      totalCandidatos++;
      break;

    case 5:
      totalNulos++;
      totalCandidatos++;
      break;

    case 6:
      votosBrancos++;
      totalCandidatos++;
      break;

    case 0:
      printf("\nEncerrando...\n");
      break;

    default:
      puts("Voto inválido!!\n\n");
    }
  }

  printf("\n%d pessoas votaram no candidato 1!!\n", totalCandidatos1);
  printf("\n%d pessoas votaram no candidato 2!!\n", totalCandidatos2);
  printf("\n%d pessoas votaram no candidato 3!!\n", totalCandidatos3);
  printf("\n%d pessoas votaram no candidato 4!!\n", totalCandidatos4);
  printf("\n%d pessoas votaram nulo!!\n", totalNulos);
  printf("\n%d pessoas votaram em branco!!\n", votosBrancos);

  printf("\nPorcentagem de votos em branco:   %.2f %%\n",
         porcentagem = ((float)votosBrancos / totalCandidatos) * 100.0);

  return 0;
}