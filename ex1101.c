/*
Leia um conjunto não determinado de pares de valores M e N
(parar quando algum dos valores for menor ou igual a zero).
Para cada par lido, mostre a sequência do menor até o maior e a
soma dos inteiros consecutivos entre eles (incluindo o N e M).

Entrada
O arquivo de entrada contém um número não determinado de valores M e N.
 A última linha de entrada vai conter um número nulo ou negativo.

Saída
Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles,
conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
5 2                 2 3 4 5 Sum=14
6 3                 3 4 5 6 Sum=18
5 0                                     */

#include <stdio.h>

int main()
{

    int m, n, aux, sum;

    while (1)
    {
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0)
        {
            break;
        }

        sum = 0;
        if (m > n)
        {
            aux = m;
            m = n;
            n = aux;
        }

        for (int i = m; i <= n; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}