/*
Após seu dragão Smaug fracassar na missão de tomar conta de Erebor, Sauron ficou muito aborrecido, e seu Olho começou a procurar por toda parte um treinador de dragões profissional, a fim de que seus demais dragões não falhassem em suas missões. Foi assim que Sauron conheceu Daenerys Targaryen. Impressionado com a reputação dela, Sauron a contratou imediatamente.

Sauron envia dragões a Daenerys quase diariamente. Alguns dragões levam mais tempo para serem treinados, outros menos, e ela sempre treina um dragão de cada vez, nunca mais de um no mesmo dia, até que ele esteja pronto para ser retornado a Sauron. Nos dias em que se dedica ao treinamento de um dragão, Daenerys deixa os demais dragões enviados por Sauron hibernando num alojamento até que chegue a vez de cada um deles. Mas o caráter de Sauron, embora de notável perseverança, não é famoso por sua paciência. Para cada dia que um dragão seu passa dormindo no alojamento, Sauron, cujo Olho enxerga tranquilamente tudo o que se passa nos domínios de Daenerys, cobra dela uma multa, que pode variar de dragão para dragão, dependendo dos planos de Sauron para seus dragões. Sauron envia exatamente um dragão por dia, e o dragão sempre chega bem no início do dia, de modo que Daenerys já pode começar a treiná-lo imediatamente. Ainda, se há dragões dormindo no alojamento e nenhum sendo treinado, Sauron envia um Nazgûl para matar Daenerys.

Daenerys Targaryen deseja minimizar a multa total a pagar a Sauron e está pedindo sua ajuda. Você já lhe disse que não pode prever o futuro e que o melhor que você pode fazer é: toda vez em que ela não estiver trabalhando com um dragão e quiser escolher um no alojamento para começar a treinar, você pode dizer a ela qual dragão escolher de modo que a escolha seria ótima se nenhum dragão mais viesse nos dias seguintes.

Entrada
A i-ésima linha da entrada diz respeito ao i-ésimo dragão enviado por Sauron a Daenerys e consiste de dois inteiros: Ti e Fi (1 ≤ Ti, Fi ≤ 103), representando respectivamente o número de dias necessários para treinar o i-ésimo dragão e a multa cobrada por dia que o dragão passa dormindo. Para quaisquer i e j distintos, Ti / Fi ≠ Tj / Fj. A entrada possui no máximo 105 linhas e termina em fim de arquivo.

Saída
Imprima uma linha contendo unicamente o valor mínimo total da multa que Daenerys pagará a Sauron se seguir seus conselhos.

Exemplo de Entrada	
4 1
3 4
1 1000
2 2
5 6

Exemplo de Saída
2060
*/

//saida errada
import java.util.*;

class Dragao {
    int tempoTreinamento;
    int multaDiaria;

    public Dragao(int tempoTreinamento, int multaDiaria) {
        this.tempoTreinamento = tempoTreinamento;
        this.multaDiaria = multaDiaria;
    }
}

public class Como_treinar_seu_dragao_1851 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Dragao> dragoes = new ArrayList<>();

        while (scanner.hasNext()) {
            int tempoTreinamento = scanner.nextInt();
            int multaDiaria = scanner.nextInt();
            dragoes.add(new Dragao(tempoTreinamento, multaDiaria));
        }

        Collections.sort(dragoes, (d1, d2) -> Double.compare((double) d2.tempoTreinamento / d2.multaDiaria,
                                                             (double) d1.tempoTreinamento / d1.multaDiaria));

        long multaTotal = 0;
        long tempoTotal = 0;
        for (Dragao dragao : dragoes) {
            multaTotal += dragao.multaDiaria * tempoTotal;
            tempoTotal += dragao.tempoTreinamento;
        }

        System.out.println(multaTotal);
    }
}
