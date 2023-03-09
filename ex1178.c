/*
Preenchimento de Vetor III
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]. 
Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo. 
Imprima o vetor N.

Entrada
A entrada contem um valor de dupla precisão com 4 casas decimais.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", 
onde i é a posição do vetor e Y é o valor armazenado naquela posição. 
Cada valor do vetor deve ser apresentado com 4 casas decimais.

Exemplo de Entrada	Exemplo de Saída
200.0000
                    N[0] = 200.0000
                    N[1] = 100.0000
                    N[2] = 50.0000
                    N[3] = 25.0000
                    N[4] = 12.5000
...*/

#include <stdio.h>

int main()
{


    double x , n[100];

    scanf("%lf",&x);

    n[0] = x;


    for(int i = 1; i < 100 ; i++){
        n[i]= n[i-1]/2;
    }

    for(int j = 0 ; j < 100; j++){
        printf("\nN[%d] = %.4lf",j,n[j]);
    }
   

    return 0;
}