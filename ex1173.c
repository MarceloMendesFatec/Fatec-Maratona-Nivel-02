/*
Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. 
Em cada posição subsequente, coloque o dobro do valor da posição anterior. Por exemplo, se o valor lido for 1, 
os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

Entrada
A entrada contém um valor inteiro (V<=50).

Saída
Para cada posição do vetor, escreva "N[i] = X", onde i é a posição do vetor e X é o valor armazenado na posição i.
 O primeiro número do vetor N (N[0]) irá receber o valor de V.

Exemplo de Entrada	Exemplo de Saída
1                   N[0] = 1
                    N[1] = 2
                    N[2] = 4
...
*/

#include <stdio.h>

int main()
{

    int N[10];
    int count = 0;
    int V;
    

    
    
        scanf("%d",&N[0]);

        V = N[0];

        for (int i = 0; i <= 9; i++)
        {

            printf("N[%d] = %d\n", count, V);
            count += 1;
            V *= 2;
        }

    return 0;
}