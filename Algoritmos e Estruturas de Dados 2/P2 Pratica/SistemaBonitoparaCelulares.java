/*A Federação dos Apagadores e Celulares Esquisitos (FACE) assinou recentemente um contrato com o Governo Federal 
para desenvolver um telefone celular de baixo custo que será distribuído gratuitamente a populações de baixa renda. 
Apesar de simples, o aparelho contará com uma série de aplicativos, a fim de que as pessoas possam desfrutar de 
todas as facilidades que as plataformas móveis proporcionam. Um desafio, contudo, está 
intrigando os programadores da FACE: o aparelho não dispõe de muitos recursos de hardware, 
e os programadores estão tendo dificuldades em escrever o módulo que gerenciará os processos do sistema 
operacional SBC (Sistema Bonito para Celulares), desenvolvido especialmente para a arquitetura. 
Os programadores receberam dos analistas as seguintes diretivas, as quais precisam ser rigorosamente seguidas:


O sistema executa apenas um processo por vez, e cada processo até o fim.
O sistema jamais pode ficar ocioso se há processos esperando para serem atendidos.
Para que um processo não trave o sistema, cada processo, quando requisita sua execução, 
deve informar ao sistema o tempo exato, em ciclos de processamento, que sua execução durará. 
O sistema jamais permite que a execução de um processo dure mais que o tempo previsto, abortando-a se necessário. 
Ainda, se um processo se encerra antes do informado, o sistema aproveita os ciclos restantes para rotinas de coleta de 
dados e comunicação com o Governo. Dessarte, para todos os efeitos, a execução de um processo que informou precisar 
de c ciclos dura sempre exatos c ciclos.
O sistema garante que é mínima a soma, para todos os processos, do tempo que cada processo espera até 
entrar em execução.
Ajude a FACE a completar o SBC escrevendo o módulo que falta!

Entrada
A entrada é composta por vários casos de teste.
 A primeira linha de cada caso de teste consiste de um único inteiro N (1 ≤ N ≤ 105), 
 o qual representa o número de processos que requisitaram sua execução ao SBC. 
 Cada uma das N linhas seguintes corresponde, então, a um processo e é formada por dois inteiros t e c 
 (1 ≤ t, c ≤ 103), os quais representavam respectivamente o tempo do sistema em que o processo fez sua requisição e 
 o número de ciclos de processamento que durará a execução do processo. 
 Considere que o tempo do sistema é contado em ciclos de processamento e que o contador começa em 
 1 em cada caso de teste. Considere ainda que a entrada é finalizada em fim de arquivo.

Saída
Para cada caso de teste, imprima o valor inteiro que representa a soma, para todos os processos, do tempo, 
em ciclos de processamento, que cada processo espera até entrar em execução. 
Por favor, note que este valor pode não caber em 32 bits.
 */

// p = ponteiro de processos (basicamente isso kkkk)
// utilizar de elementos de uma lista

import java.util.*;

// Criação da classe processos
class Process {

    int tempo; // Tempo de requisição
    int duracaoTOTAL; // Duração do processo

    Process(int tempo, int duracaoTOTAL) {
        this.tempo = tempo;
        this.duracaoTOTAL = duracaoTOTAL;
    }
}

public class SistemaBonitoparaCelulares {

    @SuppressWarnings("ConvertToTryWithResources")
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        StringBuilder output = new StringBuilder();

        while (scanner.hasNext()) {
            int N = scanner.nextInt(); // Leitura do número de processos
            List<Process> processos = new ArrayList<>();

            // Lê os processos
            for (int i = 0; i < N; i++) {
                int tempo = scanner.nextInt();
                int duracaoTOTAL = scanner.nextInt(); // Duração dos processos
                processos.add(new Process(tempo, duracaoTOTAL));
            }

            // Ordena os processos pelo tempo de requisição
            processos.sort(Comparator.comparingInt(p -> p.tempo));

            long atual = 0; // Tempo atual do sistema
            long tempoTOTAL = 0; // Soma dos tempos de espera para o sistema ir

            // Processa os processos
            for (Process p : processos) { // comparação

                // Avança o tempo atual se necessário
                if (atual < p.tempo) {
                    atual = p.tempo; // Espera até o tempo de requisição
                }

                tempoTOTAL += atual - p.tempo; // Calcula o tempo de espera
                atual += p.duracaoTOTAL; // Atualiza o tempo atual após executar o processo
            }

            // Adiciona o resultado para este caso de teste
            output.append(tempoTOTAL).append("\n");
        }

        // Imprime todos os resultados dos processos analisados
        System.out.print(output);
        scanner.close();
    }
}
