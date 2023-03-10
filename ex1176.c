/*
Faça um programa que leia um valor e apresente o número de Fibonacci 
correspondente a este valor lido. Lembre que os 2 primeiros elementos da série de Fibonacci 
são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. 
Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

Entrada
A primeira linha da entrada contém um inteiro T, indicando o número de casos de teste. 
Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60),
 correspondente ao N-esimo termo da série de Fibonacci.

Saída
Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X", 
onde X é o N-ésimo termo da série de Fibonacci.*/

#include <stdio.h>



int main()
{
    int t, n;
    long long int result;

    scanf("%d", &t);

    while (t > 0)
    {
        scanf("%d", &n);
        result = fibonacci(n);
        printf("Fib(%d) = %lld\n", n, result);
        t--;
    }

    return 0;
}

long long int fibonacci(int n)
{
    long long int f[n + 2];
    int i;

    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}