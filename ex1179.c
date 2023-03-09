/*
Preenchimento de Vetor IV
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares.
 Só que o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores encher,
 você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos.
 Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores,
 imprimindo primeiro os valores do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.


Entrada
A entrada contém 15 números inteiros.

Saída
Imprima a saída conforme o exemplo abaixo.
Exemplo de Entrada	Exemplo de Saída
1                   par[0] = 4
3                   par[1] = -4
4                   par[2] = 2
-4                  par[3] = 8
2                   par[4] = 2
3                   impar[0] = 1
8                   impar[1] = 3
2                   impar[2] = 3
5                   impar[3] = 5
-7                  impar[4] = -7
54
76
789
23
98

*/

#include <stdio.h>

int main() {

    int num, par[5], impar[5];
    int qtd_par = 0, qtd_impar = 0;

    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            // número é par
            if (qtd_par == 5)
            {
                // vetor par está cheio, imprime e reinicia
                for (int j = 0; j < qtd_par; j++)
                {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                qtd_par = 0;
            }
            par[qtd_par] = num;
            qtd_par++;
        }
        else
        {
            // número é ímpar
            if (qtd_impar == 5)
            {
                // vetor ímpar está cheio, imprime e reinicia
                for (int j = 0; j < qtd_impar; j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                qtd_impar = 0;
            }
            impar[qtd_impar] = num;
            qtd_impar++;
        }
    }

    // imprime os valores restantes nos vetores
    for (int i = 0; i < qtd_impar; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (int i = 0; i < qtd_par; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }

return 0;
}