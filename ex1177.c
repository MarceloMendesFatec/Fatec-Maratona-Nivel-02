/* Faça um programa que leia um valor T e preencha um vetor N[1000] 
com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.

Entrada
A entrada contém um valor inteiro T (2 ≤ T ≤ 50).

Saída
Para cada posição do vetor, escreva "N[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.

Exemplo de Entrada	Exemplo de Saída
3                    N[0] = 0
                    N[1] = 1
                    N[2] = 2
                    N[3] = 0
                    N[4] = 1
                    N[5] = 2
                    N[6] = 0
                    N[7] = 1
                    N[8] = 2

*/

#include <stdio.h>

int main()
{

    // Declaração das variáveis T e N
    int T, N[1000];

    // Leitura do valor T da entrada padrão
    scanf("%d", &T);

    // Loop para preencher o vetor N com a sequência de valores de 0 até T-1
    for (int i = 0; i < 1000; i++)
    {
        N[i] = i % T; // O valor de N[i] é igual ao resto da divisão de i por T
    }

    // Loop para imprimir o vetor N no formato solicitado
    for (int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, N[i]); // Imprime a mensagem no formato solicitado
    }

    return 0; // Indica que o programa foi executado com sucesso
}