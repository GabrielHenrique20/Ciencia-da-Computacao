/*Todo ano, Roberto gosta de escolher a sua árvore de natal, ele não deixa ninguém escolher para ele,
pois ele acha que a árvore para ser bonita, deve satisfazer algumas condições, como altura, espessura e
quantidade de galhos, para ele conseguir pendurar muitos enfeites nela.

Roberto quer que sua árvore tenha pelo menos 200 centímetros de altura,
mas não quer que ela seja maior do que 300 centímetros, ou a árvore não irá caber em sua casa.
Quanto a espessura, ele deseja que a sua árvore tenha um tronco com 50 centímetros de diâmetro ou mais.
O número de galhos da árvore tem que ser igual ou maior a 150.


Entrada
A primeira linha de entrada contém um inteiro N (0 < N ≤ 10000), o número de casos teste.
As N linhas seguintes contém 3 inteiros cada, h, de g //(0 < a, d, g ≤ 5000)//, a altura da árvore em centímetros,
o seu diâmetro em centímetros, e a quantidade de galhos da árvore.

Saída
Sua tarefa é, para cada árvore, imprimir Sim, se ela é uma árvore que Roberto pode escolher, ou Não,
se é uma árvore que ele não deve escolher.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Altura da árvore: 200 centimetros <= h <= 300 centimetros

// Espessura da árvore: 50 centimetros <= d

// Galhos da árvore: 150 centimetros <= g

int main(void)
{

    int N = 0;
    int i = 0;

    scanf("%d", &N); // entrada para o numero de casos teste

    // Começar a leitura de cada caso teste (pode testar mais de uma arvore de natal)
    for (i = 0; i < N; i++)
    {
        int h = 0;
        int d = 0;
        int g = 0;

        // leitura das medias da arvore digitada
        scanf("%d %d %d", &h, &d, &g);

        // testes para falar "sim" ou "nao" se a arvore cabe ou nao cabe
        if (h >= 200 && h <= 300 && d >= 50 && g >= 150)
        {
            printf("Sim\n"); // \n so na frente
        }
        else
        {
            printf("Nao\n");
        }
    }

    return 0;
}
