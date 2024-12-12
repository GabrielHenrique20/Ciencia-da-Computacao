import java.util.*;

// I = inserir na arvore algum elemento --> nao possui saida

// INFIXA = lista os elementos presentes na árvore percurso infixo --> possui saida

// PREFIXA = lista os elementos presentes na arvore percurso prefixo --> possui saida

// POSFIXA = lista os elementos presentes na arvore percurso posfixo --> possui saida

// P = pesquisa um elemento e, caso exista printa "existe", se nao printa "nao existe" --> possui saida

// Na hora da entrada, fazer testes com minusculas e maiusculas 'a - z' e 'A - Z'

import java.util.Scanner;

@SuppressWarnings("unused")
class OperacoesABP {

    static class No {
        char valor;
        No esquerda, direita;

        public No(char valor) {
            this.valor = valor;
            esquerda = direita = null;
        }
    }

    No raiz;

    public OperacoesABP() {
        raiz = null;
    }

    // Inserir um novo elemento na árvore
    public void inserir(char valor) {
        raiz = inserirRecursivo(raiz, valor);
    }

    private No inserirRecursivo(No raiz, char valor) {
        if (raiz == null) {
            raiz = new No(valor);
            return raiz;
        }
        if (valor < raiz.valor) {
            raiz.esquerda = inserirRecursivo(raiz.esquerda, valor);
        } else if (valor > raiz.valor) {
            raiz.direita = inserirRecursivo(raiz.direita, valor);
        }
        return raiz;
    }

    // Percurso infixo (in-order)
    public void percorrerInfixo() {
        percorrerInfixoRecursivo(raiz);
        System.out.println();
    }

    private void percorrerInfixoRecursivo(No raiz) {
        if (raiz != null) {
            percorrerInfixoRecursivo(raiz.esquerda);
            System.out.print(raiz.valor + " ");
            percorrerInfixoRecursivo(raiz.direita);
        }
    }

    // Percurso prefixo (pre-order)
    public void percorrerPrefixo() {
        percorrerPrefixoRecursivo(raiz);
        System.out.println();
    }

    private void percorrerPrefixoRecursivo(No raiz) {
        if (raiz != null) {
            System.out.print(raiz.valor + " ");
            percorrerPrefixoRecursivo(raiz.esquerda);
            percorrerPrefixoRecursivo(raiz.direita);
        }
    }

    // Percurso posfixo (post-order)
    public void percorrerPosfixo() {
        percorrerPosfixoRecursivo(raiz);
        System.out.println();
    }

    private void percorrerPosfixoRecursivo(No raiz) {
        if (raiz != null) {
            percorrerPosfixoRecursivo(raiz.esquerda);
            percorrerPosfixoRecursivo(raiz.direita);
            System.out.print(raiz.valor + " ");
        }
    }

    // Pesquisa de um elemento na árvore
    public boolean pesquisar(char valor) {
        return pesquisarRecursivo(raiz, valor);
    }

    private boolean pesquisarRecursivo(No raiz, char valor) {
        if (raiz == null) {
            return false;
        }
        if (valor == raiz.valor) {
            return true;
        }
        if (valor < raiz.valor) {
            return pesquisarRecursivo(raiz.esquerda, valor);
        } else {
            return pesquisarRecursivo(raiz.direita, valor);
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        OperacoesABP arvore = new OperacoesABP();

        while (scanner.hasNextLine()) {
            String linha = scanner.nextLine().trim();
            if (linha.startsWith("I ")) {
                char valor = linha.charAt(2);
                arvore.inserir(valor);
            }

            else if (linha.equals("INFIXA")) {
                arvore.percorrerInfixo();
            }

            else if (linha.equals("PREFIXA")) {
                arvore.percorrerPrefixo();
            }

            else if (linha.equals("POSFIXA")) {
                arvore.percorrerPosfixo();
            }

            else if (linha.startsWith("P ")) {
                char valor = linha.charAt(2);
                if (arvore.pesquisar(valor)) {
                    System.out.println(valor + " existe");
                } else {
                    System.out.println(valor + " nao existe");
                }
            }
        }
        scanner.close();
    }
}
