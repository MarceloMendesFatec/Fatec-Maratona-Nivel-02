/*Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
                        I=1 J=7
                        I=1 J=6
                        I=1 J=5
                        I=3 J=9
                        I=3 J=8
                        I=3 J=7
                        ...
                        I=9 J=15
                        I=9 J=14
                        I=9 J=13*/

#include <stdio.h>
int main()
{  
    int i = 1, j = 7;
    while (i <= 9 )
    {
        printf("I=%d J=%d\n", i, j--);
        printf("I=%d J=%d\n", i, j--);
        printf("I=%d J=%d\n", i, j--);
        i += 2;
        j += 5;
    }
    return 0;
}