/*
Faça um programa que leia um vetor N[20].
Troque a seguir, o primeiro elemento com o último,
o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.

Entrada
A entrada contém 20 valores inteiros, positivos ou negativos.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.

Exemplo de Entrada	Exemplo de Saída
0                       N[0] = 230
-5                      N[1] = 63
...                     ...
63                      N[18] = -5
230                     N[19] = 0*/

#include <stdio.h>

int main()
{

    int n[20];
    int i = 0;
    int aux;

    do
    {
        scanf("%d", &n[i]);
        i++;
    } while (i < 20);

    for (int j = 0, k = 19; j < 10; j++, k--)
    {
        aux = n[j];
        n[j] = n[k];
        n[k] = aux;
    }

    for (int j = 0; j < 20; j++)
    {
        printf("N[%d] = %d\n", j, n[j]);
    }

    return 0;
}
