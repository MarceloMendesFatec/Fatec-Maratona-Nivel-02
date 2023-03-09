/*
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, 
caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". 
Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, 
com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.

Exemplos de Entrada	  Exemplos de Saída
10.0 20.1 5.1           R1 = -0.29788
                        R2 = -1.71212

0.0 20.0 5.0      Impossivel calcular
             


*/

#include <stdio.h>
#include <math.h>

int main()
{

   double a,b,c;
   double delta;
   double r1,r2;

   scanf("%lf %lf %lf",&a,&b,&c);

    delta = b*b - 4*a*c;

    if(a==0 || delta < 0 ){
        printf("Impossivel Calcular");
    }else{
        r1= (-b + sqrt(delta)) / (2*a);
        r2= (-b - sqrt(delta)) / (2*a);

        printf("R1 = %.5lf\nR2 = %.5lf",r1,r2);
    }



    return 0;
}