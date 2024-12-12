#include <stdio.h>

int main(void) {

  int idade = 0;

  printf("Digite sua idade:  \n\n");
  scanf("%d", &idade);

  if (idade >= 5) {

    if (idade > 0 && idade <= 7) {
      puts("\nCATEGORIA: JUNIOR");
    }

    else if (idade >= 8 && idade <= 10) {
      puts("\nCATEGORIA: JUVENIL");
    }

    else if (idade >= 11 && idade <= 15) {
      puts("\nCATEGORIA: ADOLESCENTE");
    }

    else if (idade >= 16 && idade <= 30) {
      puts("\nCATEGORIA: ADULTO");
    }

    else {
      puts("\nCATEGORIA: SENIOR");
    }
  }

  else {
    puts("\nNão e apto para participar das aulas de natação");
  }

  return 0;
}