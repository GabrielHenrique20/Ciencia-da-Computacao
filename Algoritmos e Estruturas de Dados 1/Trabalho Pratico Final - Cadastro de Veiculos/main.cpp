#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define PLACA 8
#define MARCA 50
#define MODELO 50
#define ARQUIVO 100
#define OBSERVACAO 100

// varavel global para observacao
const char Vazio[1] = "";

/*
Se Return value = 0 então indica que str1 é igual a str2 (SERIA NESTE CASO O
PESQUISAR VEICULO, POIS O CARA IRIA DGITAR A PLACA E O PROGRAMA VERIFICAR SE A
PLACA É IGUAL A ALGUMA PRESENTE DENTRO DO ARQUIVO/PROGRAMA)
*/

// Os processo se realizarão por meio da placa do veiculo

// Informações do veiculo em Struct (typedef usado)
typedef struct Veiculo {
  char placa[PLACA]; // placa padrão Mercosul
  char marca[MARCA];
  char modelo[MODELO];
  int ano;
  float preco;
  char tipo[10]; // carro ou moto
  char observacao[OBSERVACAO];
} Veiculo;

// Listar todos os veículos
void ListarTODOSVeiculos(Veiculo v[], int quantidade) {

  if (quantidade == 0) {
    printf("\nNenhum veiculo cadastrado no nosso sistema!!\n");
  } else {

    printf("\n\n\n-----LISTA DE VEICULOS-----\n");
    printf("\nTotal de veiculos cadastrados -> %d\n", quantidade);

    for (int i = 0; i < quantidade; i++) {
      printf("\nVeiculo %d:\n", i + 1);
      printf("Placa: %s\n", v[i].placa);
      printf("Marca: %s\n", v[i].marca);
      printf("Modelo: %s\n", v[i].modelo);
      printf("Ano: %d\n", v[i].ano);
      printf("Preco: %.2f\n", v[i].preco);
      printf("Tipo: %s\n", v[i].tipo);
      printf("Observacao: %s\n", v[i].observacao);
      printf("\n\n");
    }
  }
}

// Pesquisar por um veículo
void PesquisarPorVeiculo(Veiculo v[], int quantidade, char placa[]) {

  printf("\n\n\n-----PESQUISAR VEICULOS-----\n");

  do {
    printf("\nDigite a placa do veiculo para pesquisa-lo: ");
    cin >> placa;
  } while ((strlen(placa) != 7));

  for (int i = 0; i < quantidade; i++) {
    if (strcmp(v[i].placa, placa) == 0) {
      printf("\nVeiculo encontrado:\n");
      printf("Placa: %s\n", v[i].placa);
      printf("Marca: %s\n", v[i].marca);
      printf("Modelo: %s\n", v[i].modelo);
      printf("Ano: %d\n", v[i].ano);
      printf("Preco: %.2f\n", v[i].preco);
      printf("Tipo: %s\n", v[i].tipo);
      printf("Observacao: %s\n", v[i].observacao);
      return;
    }
  }
  printf("\nVeiculo nao encontrado!\n");
}

// Função para cadastrar veiculo
void CadastrarVeiculo(Veiculo v[], int *quantidade) {
  Veiculo novoV;
  char resp;

  printf("\n\n\n-----CADASTRAR VEICULOS-----\n");

  do {
    printf("\nDigite a placa do novo veiculo: \n");
    cin >> novoV.placa;
  } while (strlen(novoV.placa) != 7);

  // verificar se veiculo existe
  int i = 0;
  for (i = 0; i < *quantidade; i++) {
    if (strcmp(v[i].placa, novoV.placa) == 0) {
      printf("\nEsta placa ja existe!\n");
      return;
    }
  }

  printf("\nDigite a marca do veiculo: \n");
  cin >> novoV.marca;

  printf("\nDigite o modelo do veiculo: \n");
  cin >> novoV.modelo;

  printf("\nDigite o ano veiculo: \n");
  cin >> novoV.ano;

  printf("\nDigite o preco do veiculo: \n");
  cin >> novoV.preco;

  printf("\nDigite o tipo de veiculo: \n");
  cin >> novoV.tipo;

  do {
    printf("\nDeseja colocar alguma observacao? (S/N)\n");
    cin >> resp;
  } while (!(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n'));

  if (resp == 'S' || resp == 's') {
    printf("\nDigite uma observacao sobre o veiculo: \n");
    scanf(" %[^\n]", novoV.observacao); // tem que ser scanf por que se nao buga
  }

  else {
    strcpy(novoV.observacao, Vazio);
  }

  v[*quantidade] = novoV;
  ++(*quantidade);

  printf("\nNovo veiculo cadastrado com sucesso!\n");
}

// Editar um veículo
void EditarVeiculo(Veiculo v[], int quantidade, char placa[]) {
  int i = 0;

  printf("\n\n\n-----EDITAR VEICULO-----\n");

  do {
    printf("\nDigite a placa do veiculo para edita-lo: ");
    cin >> placa;
  } while ((strlen(placa) != 7));

  for (i = 0; i < quantidade; i++) {
    if (strcmp(v[i].placa, placa) == 0) {
      printf("\nVeiculo encontrado com sucesso!\n\n");
      printf("\nINFORMACOES: \n");
      printf("PLACA -> %s\n", v[i].placa);
      printf("MARCA -> %s\n", v[i].marca);
      printf("MODELO -> %s\n", v[i].modelo);
      printf("ANO -> %d\n", v[i].ano);
      printf("PRECO -> %.2f\n", v[i].preco);
      printf("TIPO -> %s\n", v[i].tipo);
      printf("OBSERVACAO -> %s\n", v[i].observacao);

      printf("\n\nAtualize o veiculo encontrado: \n\n");

      printf("Digite a nova marca: \n");
      cin >> v[i].marca;

      printf("\nDigite o novo modelo: \n");
      cin >> v[i].modelo;

      printf("\nDigite o novo ano: \n");
      cin >> v[i].ano;

      printf("\nDigite o novo preco: \n");
      cin >> v[i].preco;

      printf("\nDigite o novo tipo: \n");
      cin >> v[i].tipo;

      printf("\nDigite a nova observacao: \n");
      scanf(" %[^\n]", v[i].observacao);

      printf("\nVeículo atualizado!\n");
      return;
    }
  }

  printf("\nEste veiculo nao foi encontrado!\n");
}

// Excluir um veículo
void ExcluirVeiculo(Veiculo v[], int *quantidade, char placa[]) {
  int i = 0;
  int j = 0;

  printf("\n\n\n-----EXCLUIR VEICULO-----\n");

  do {
    printf("\nDigite a placa do veiculo para exclui-lo: ");
    cin >> placa;
  } while ((strlen(placa) != 7));

  for (i = 0; i < *quantidade; i++) {
    if (strcmp(v[i].placa, placa) == 0) {
      printf("\nVeiculo encontrado com sucesso!\n\n");
      printf("\nINFORMACOES: \n");
      printf("PLACA -> %s\n", v[i].placa);
      printf("MARCA -> %s\n", v[i].marca);
      printf("MODELO -> %s\n", v[i].modelo);
      printf("ANO -> %d\n", v[i].ano);
      printf("PRECO -> %.2f\n", v[i].preco);
      printf("TIPO -> %s\n", v[i].tipo);
      printf("OBSERVACAO -> %s\n", v[i].observacao);

      printf("\n\nDeseja excluir este veiculo? (S/N)\n");
      char resposta;
      do {
        scanf(" %c", &resposta);
        getchar();
      } while (!(resposta == 'S' || resposta == 's' || resposta == 'N' ||
                 resposta == 'n'));

      if (resposta == 'S' || resposta == 's') {
        for (j = i; j < (*quantidade) - 1; j++) {
          v[j] = v[j + 1]; // preeher o vazio
        }
        (*quantidade)--;
        printf("\nVeiculo excluido!\n");
        return;
      }

      else {
        printf("\nExclusao de veiculo cancelada!\n");
        return;
      }
    }
  }
  printf("\nEste veiculo nao foi encontrado!\n");
}

// Colocar tudo em um arquivo "veiculos.txt"
void gravarVeiculoArquivo(Veiculo v[], int quantidade) {
  FILE *arquivo = fopen("veiculos.txt", "w");

  if (arquivo != NULL) {
    fprintf(arquivo, "%d\n", quantidade);

    for (int i = 0; i < quantidade; i++) {
      fprintf(arquivo, "%s;%s;%s;%d;%.2f;%s;%s\n", v[i].placa, v[i].marca,
              v[i].modelo, v[i].ano, v[i].preco, v[i].tipo, v[i].observacao);
    }

    fclose(arquivo);
  } else {
    printf("Erro ao salvar os veiculos.\n");
  }
}

int main() {
  Veiculo v[ARQUIVO];
  int quantidade = 0;
  int i = 0;

  FILE *arquivo;
  arquivo = fopen("veiculos.txt", "r");

  if (arquivo != NULL) {
    fscanf(arquivo, "%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
      fscanf(arquivo, " %[^;];%[^;];%[^;];%d;%f;%[^;];%[^\n]", v[i].placa,
             v[i].marca, v[i].modelo, &v[i].ano, &v[i].preco, v[i].tipo,
             v[i].observacao);
    }
    fclose(arquivo);
  }

  // Variaveis para o menu de opcoes
  char placa[PLACA];
  int escolha;

  do {

    printf("\n\n\n---------MENU DE OPCOES---------\n\n");
    printf("1 - Listar todos os veiculos\n");
    printf("2 - Pesquisar um veiculo\n");
    printf("3 - Cadastrar um veiculo\n");
    printf("4 - Editar um veiculo\n");
    printf("5 - Excluir um veiculo\n");
    printf("6 - Sair do programa\n");
    printf("---------------------------------");

    printf("\nEscolha uma das opcoes: ");
    cin >> escolha;

    switch (escolha) {
    case 1:
      ListarTODOSVeiculos(v, quantidade);
      break;

    case 2:
      PesquisarPorVeiculo(v, quantidade, placa);
      break;

    case 3:
      CadastrarVeiculo(v, &quantidade);
      gravarVeiculoArquivo(v, quantidade);
      break;

    case 4:
      EditarVeiculo(v, quantidade, placa);
      gravarVeiculoArquivo(v, quantidade);
      break;

    case 5:

      ExcluirVeiculo(v, &quantidade, placa);
      gravarVeiculoArquivo(v, quantidade);
      break;

    case 6:
      gravarVeiculoArquivo(v, quantidade);
      printf("\nFinalizando programa...\n");
      break;

    default:
      printf("\nOpcao inexistente, digite novamente!\n");
    }
  } while (escolha != 6);

  fflush(stdin);
  printf("\nDigite ENTER para finalizar: \n");
  getchar();
  printf("\nPROGRAMA ENCERRADO! OBRIGADO POR ESCOLHER NOSSA EMPRESA!\n");

  return 0;
}
