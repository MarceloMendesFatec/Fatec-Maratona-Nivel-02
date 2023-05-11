/*
Solicitaram para que você construisse um programa simples de criptografia.
Este programa deve possibilitar enviar mensagens codificadas sem que alguém consiga lê-las.
 O processo é muito simples. São feitas três passadas em todo o texto.

Na primeira passada, somente caracteres que sejam letras minúsculas e maiúsculas
devem ser deslocadas 3 posições para a direita, segundo a tabela ASCII:
letra 'a' deve virar letra 'd', letra 'y' deve virar caractere '|' e assim sucessivamente.
Na segunda passada, a linha deverá ser invertida. Na terceira e última passada,
todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados
uma posição para a esquerda na tabela ASCII. Neste caso, 'b' vira 'a' e 'a' vira '`'.

Por exemplo, se a entrada for “Texto #3”, o primeiro processamento sobre esta entrada deverá produzir “Wh{wr #3”.
O resultado do segundo processamento inverte os caracteres e produz “3# rw{hW”.
Por último, com o deslocamento dos caracteres da metade em diante, o resultado final deve ser “3# rvzgV”.

Entrada
A entrada contém vários casos de teste.
 A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 1*104),
 indicando a quantidade de linhas que o problema deve tratar.
 As N linhas contém cada uma delas M (1 ≤ M ≤ 1*103) caracteres.

Saída
Para cada entrada, deve-se apresentar a mensagem criptografada.

Texto #3              3# rvzgV
abcABC1               1FECedc

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1100

// função para inverter uma string
void reverse(char *texto, int len)
{
    char aux;
    for (int i = 0; i < len / 2; i++)
    {
        aux = texto[i];
        texto[i] = texto[len - i - 1];
        texto[len - i - 1] = aux;
    }
}

// função para deslocar as letras de uma string três posições na tabela ASCII
void shift(char *texto, int len)
{
    for (int i = 0; i < len; i++)
    {
        if ((texto[i] >= 'A' && texto[i] <= 'Z') ||
            (texto[i] >= 'a' && texto[i] <= 'z'))
        {
            texto[i] += 3;
        }
    }
}

// função para decrementar o valor ASCII das letras da metade da string
void half(char *texto, int len)
{
    for (int i = len / 2; i < len; i++)
    {
        texto[i]--;
    }
}

int main()
{
    int n; // número de casos de teste
    char texto[MAX_SIZE];

    scanf("%d\n", &n); // leitura do número de casos de teste
                       // é importante ler uma quebra de linha após o número

    for (int i = 0; i < n; i++)
    {
        fgets(texto, MAX_SIZE, stdin); // leitura da string de entrada
        int len = strlen(texto) - 1;   // tamanho da string (desconsiderando o caractere de quebra de linha)

        shift(texto, len);  // aplicar a operação shift
        reverse(texto, len); // aplicar a operação reverse
        half(texto, len);   // aplicar a operação half

        printf("%s\n", texto); // imprimir a string modificada
                               // é importante imprimir uma quebra de linha após a string
    }

    return 0;
}
*/

#include <stdio.h>
#include <string.h>

void main(void)
{
    char palavra[1100], aux;
    unsigned casos;
    unsigned short i, j, tam, tamMetade;

    scanf("%u", &casos);

    while (casos)
    {

        scanf(" %[^\n]", palavra);

        tam = strlen(palavra);
        tamMetade = tam / 2;

        // Primeira passada na string move caracteres minúsculos e maiúsculos 3 posições;
        for (i = 0; i < tam; i++)
            if ((palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= 'a' && palavra[i] <= 'z'))
                palavra[i] = palavra[i] + 3;

        // Segunda passada inverte a String;
        for (i = 0, j = tam - 1; i < tamMetade; i++, j--)
        {

            aux = palavra[j];
            palavra[j] = palavra[i];
            palavra[i] = aux;
        }

        // Terceira passada modifica qualquer caracrete da metade em diante em uma posição;
        for (i = tamMetade; i < tam; i++)
            if ((palavra[i] >= 32 && palavra[i] <= 176))
                palavra[i] = palavra[i] - 1;

        printf("%s\n", palavra);

        // Reseta a string para a proxima iteração;
        memset(palavra, 0, sizeof(palavra));

        casos--;
    }
}