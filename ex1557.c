/*

Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 15),
 correspondente a ordem de uma matriz M de inteiros, 
 e construa a matriz de acordo com o exemplo abaixo.

Entrada
A entrada consiste de vários inteiros, 
um valor por linha, correspondentes as ordens das matrizes a serem construídas.
 O final da entrada é marcado por um valor de ordem igual a zero (0).

Saída
Para cada inteiro da entrada imprima a matriz correspondente, 
de acordo com o exemplo. Os valores das matrizes devem ser formatados em um campo de tamanho T justificados à direita
 e separados por espaço, onde T é igual ao número de dígitos do maior número da matriz. 
 Após o último caractere de cada linha da matriz não deve haver espaços em branco. 
 Após a impressão de cada matriz deve ser deixada uma linha em branco.*/

#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) && n != 0)
    {
        int matriz[n][n];
        int valor = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matriz[i][j] = valor;
                valor *= 2;
            }
            valor = matriz[i][1];
        }

        int max = matriz[n - 1][n - 1];
        int num_digitos_max = 0;
        while (max > 0)
        {
            num_digitos_max++;
            max /= 10;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    printf("%*d", num_digitos_max, matriz[i][j]);
                }
                else
                {
                    printf(" %*d", num_digitos_max, matriz[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}