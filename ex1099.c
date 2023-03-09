/*
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir.
Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.

Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir.
Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída
Imprima a soma de todos valores ímpares entre X e Y.

Exemplo de Entrada	Exemplo de Saída
7                       0

4 5                     11

13 10                   5

6 4                     0

3 3                     0

3 5                     0

3 4                     12

3 8

*/

#include <stdio.h>

int main()
{
    int n, i, j, x, y, sum;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        sum = 0;
        if (x > y)
        {
            int aux = x;
            x = y;
            y = aux;
        }
        for (j = x + 1; j < y; j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}