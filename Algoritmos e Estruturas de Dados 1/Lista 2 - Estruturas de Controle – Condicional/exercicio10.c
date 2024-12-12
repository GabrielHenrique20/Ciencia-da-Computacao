#include <stdio.h>

int main(void) {
  int idade = 0;
  float altura = 0.00;

  printf("Digite sua idade (anos):  \n");
  scanf("%d", &idade);

  printf("Digite sua altura (metros):  \n");
  scanf("%f", &altura);

  if ((idade >= 6 && idade <= 10) && (altura >= 1.00)) {
    puts("\nCATEGORIA: INFANTIL");
  }

  else if ((idade >= 11 && idade <= 17) && (altura >= 1.40)) {
    puts("\nCATEGORIA: JUNIOR");
  }

  else if ((idade >= 18 && idade <= 35) && (altura >= 1.70)) {
    puts("\nCATEGORIA: PROFISSIONAL");
  }

  else if ((idade >= 35) && (altura >= 1.60)) {
    puts("\nCATEGORIA: SENIOR");
  }

  else {
    puts("\nNAO APTO!!");
  }

  return 0;
}