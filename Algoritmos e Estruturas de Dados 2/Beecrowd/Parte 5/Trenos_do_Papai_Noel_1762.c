/*
 Todos os anos quando chega o natal, o Papai Noel tem a importante e difícil tarefa de entregar milhares de presentes a todas as crianças do mundo. O que ninguém sabe, é que ele desenvolveu uma maneira eficaz para conseguir entregar todos os presentes antes que o natal acabe, e essa maneira consiste numa infinidade de trenós espalhados pelo globo entregando simultaneamente todos os presentes. Dessa maneira fica muito mais fácil para completar as entregas, mas por conta de ser um número muito grande de presentes a ser entregue, o Papai Noel sempre tem dificuldades em saber quantos trenós ele disponibilizará para cada lote de presentes. Noel tem uma lista com o número de presentes de cada lote contendo o nome do presente e o seu peso, e ele também sabe a capacidade de carga de cada trenó. Sabendo essas informações, todo ano, Noel pede ajuda a um estudante para desenvolver um programa que possa ajuda-lo a saber quantos trenós serão necessários para cada lote.

Sua tarefa é desenvolver um programa que armazene um número determinado de presentes de um lote, cada presente é armazenado com o nome do brinquedo e o seu respectivo peso em Quilogramas(considerar duas casas após a vírgula), depois de armazenar a lista, você irá informar a capacidade de carga do trenó, e após você deve informar a lista de pedidos, contendo o nome do presente e a sua quantidade, feito isso você deve calcular o peso total dos presentes e determinar quantos trenós serão necessários para efetuar a entrega.

Entrada
A primeira linha contem um número inteiro Y correspondendo a o número de casos de testes, após você deverá informar um inteiro T (0 < T < 1000) que corresponde a o número de presentes do lote, após você deve ler a lista de presentes, uma string N com o nome do presente e um valor de ponto flutuante K (0 < K <= 100 ) que corresponde ao peso em quilogramas do presente, o nome e o peso devem ficar em linhas separadas. Após inserir todos os T presentes você deve informar um valor de ponto flutuante M (0 < M <= 100) que corresponde em quilogramas a capacidade de carga do trenó, considerar duas casas após a vírgula. Após inserir o valor M você deve informar a lista que contém X pedidos da seguinte forma, uma string P correspondendo ao nome do presente, na próxima linha um valor inteiro J (0 < J <= 100) que corresponde a quantidade desse presente. Essa lista só termina quando forem inseridos um "-" para o nome do presente e "0" para o peso do presente.

Saída
Na primeira linha de saída deverá ser informado o peso total de presentes da lista de pedidos, com duas casas após a vírgula. Na segunda linha será informado o número de trenós necessários para levar os presentes da lista de pedidos. Caso seja inserido na lista de pedidos um presente que não consta na lista do lote dos brinquedos, deverá ser impresso a seguinte mensagem “NAO LISTADO: ” seguido pelo nome do presente.
Deixar uma linha em branco após a impressão de cada caso de teste.

Exemplo de Entrada	
2
5
Martelo do Thor
0.50
Bicicleta do Ben10
12.0
Boneco do Wolverine
0.90
Carrinho de controle remoto
0.50
Mascara do Homem de Ferro
2.50
60.00
Mascara do Homem de Ferro
55
Bicicleta do Ben10
30
Mascara do Homem de Ferro
32
Boneco do Wolverine
60
Carrinho de controle remoto
80
Mascara do Homem de Ferro
25
-
0
5
Comandos em Acao
1.50
Boneco do Batman
0.8
Carrinho de madeira
2.90
Tenis do Flash
5.50
Mochila do X-men
0.90
100.00
Carrinho de madeira
50
Mochila do X-men
30
Tenis do Flash
12
Boneco do Batman
30
Comandos em Acao
30
Boneco do Homem Aranha
10
-
0

Saída
Peso total: 734.00 kg
Numero de trenos: 13

NAO LISTADO: Boneco do Homem Aranha
Peso total: 307.00 kg
Numero de trenos: 4
 */
#include <stdio.h>
#include <string.h>

#define MAX_PRESENTS 100

typedef struct {
    char nome[100];
    float peso;
} Presente;

int main() {
    int Y;
    scanf("%d", &Y);

    while (Y--) {
        int T;
        scanf("%d", &T);

        Presente presentes[MAX_PRESENTS];
        for (int i = 0; i < T; ++i) {
            scanf(" %[^\n]s", presentes[i].nome);
            scanf("%f", &presentes[i].peso);
        }

        float M;
        scanf("%f", &M);

        char nome_pedido[100];
        int quantidade;
        float peso_total = 0.0;
        int num_pedidos = 0;
        int num_trenos = 0;
        int presente_nao_listado = 0;

        while (1) {
            scanf(" %[^\n]s", nome_pedido);
            if (strcmp(nome_pedido, "-") == 0) {
                scanf("%d", &quantidade);
                if (quantidade == 0)
                    break;
            } else {
                scanf("%d", &quantidade);

                // Procura o presente na lista de presentes do lote
                int encontrado = 0;
                for (int i = 0; i < T; ++i) {
                    if (strcmp(nome_pedido, presentes[i].nome) == 0) {
                        peso_total += presentes[i].peso * quantidade;
                        encontrado = 1;
                        break;
                    }
                }

                if (!encontrado) {
                    printf("NAO LISTADO: %s\n", nome_pedido);
                    presente_nao_listado = 1;
                }

                num_pedidos++;
            }
        }

        // Calcular número de trenós necessários
        num_trenos = (int)(peso_total / M);
        if (peso_total > num_trenos * M)
            num_trenos++;

        // Output do resultado
        if (!presente_nao_listado) {
            printf("Peso total: %.2f kg\n", peso_total);
            printf("Numero de trenos: %d\n\n", num_trenos);
        } else {
            printf("Peso total: %.2f kg\n", peso_total);
            printf("Numero de trenos: %d\n\n", num_trenos);
        }
    }

    return 0;
}
