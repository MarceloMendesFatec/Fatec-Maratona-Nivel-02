/*
Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100),
 correspondente a ordem de uma matriz M de inteiros, 
 e construa a matriz de acordo com o exemplo abaixo.

Entrada
A entrada consiste de vários inteiros, um valor por linha,
 correspondentes as ordens das matrizes a serem construídas. 
 O final da entrada é marcado por um valor de ordem igual a zero (0).

Saída
Para cada inteiro da entrada imprima a matriz correspondente, 
de acordo com o exemplo. Os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados à 
ireita e separados por espaço. Após o último caractere de cada linha da matriz não deve haver espaços em branco.
 Após a impressão de cada matriz deve ser deixada uma linha em branco.*/

#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) == 1 && n != 0)
    {
        int m[n][n];
        int num = 1, layer = 0;

        while (layer <= n / 2)
        {
            for (int i = layer; i < n - layer; i++)
            {
                for (int j = layer; j < n - layer; j++)
                {
                    m[i][j] = num;
                }
            }
            layer++;
            num++;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    printf("%3d", m[i][j]);
                }
                else
                {
                    printf(" %3d", m[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}