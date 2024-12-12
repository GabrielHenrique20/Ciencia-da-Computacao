#include <iostream>
#include <string>
using namespace std;

class Elevador {
  int andarAtual;
  int totalAndares;
  int capacidade;
  int PessoasPresentes;

public:
  void inicializa(int capacidade, int totalAndares) {
    andarAtual = 0;
    PessoasPresentes = 0;
    this->capacidade = capacidade;
    this->totalAndares = totalAndares;
  }

  void entra() {
    if (PessoasPresentes < capacidade) {
      PessoasPresentes++;
    }
  }

  void sai() {
    if (PessoasPresentes > 0) {
      PessoasPresentes--;
    }
  }

  void sobe() {
    if (andarAtual < totalAndares) {
      andarAtual++;
    }
  }

  void desce() {
    if (andarAtual > 0) {
      andarAtual--;
    }
  }

  // gets
  int getAndarAtual() { return andarAtual; }

  int getTotalAndares() { return totalAndares; }

  int getCapacidadeElevador() { return capacidade; }

  int getQuantidadePessoas() { return PessoasPresentes; }
};

int main() {
  Elevador elevador;

  elevador.inicializa(10, 10);

  elevador.entra();
  elevador.entra();
  elevador.sobe();
  elevador.sobe();

  cout << "Andar atual: " << elevador.getAndarAtual() << endl;
  cout << "Pessoas presentes: " << elevador.getQuantidadePessoas() << endl;

  elevador.entra();
  elevador.entra();
  elevador.entra();
  elevador.entra();
  elevador.sobe();
  elevador.sobe();

  cout << "Andar atual: " << elevador.getAndarAtual() << endl;
  cout << "Pessoas presentes: " << elevador.getQuantidadePessoas() << endl;

  elevador.desce();
  elevador.desce();
  elevador.sai();
  elevador.sai();

  cout << "Andar atual: " << elevador.getAndarAtual() << endl;
  cout << "Pessoas presentes: " << elevador.getQuantidadePessoas() << endl;

  return 0;
}