/* Contador de bits
*
* Este programa conta o numero de bits em um byte
*/

#include <stdio.h>

int encontra1(char num)
{                                       // função criada para encontrar o numero de "uns" em  um byte rece-
    int x;                              // bendo um char como entrada e fazendo um and lógico bit a bit com
    x = num & 0x80;                     // o número 128, que possui apenas o bit mais significativo setado,
                                        // de forma a verificar se o bit mais significativo da var recebida
    return x;                           // está setado. Retorna um valor usado como verdadeiro ou falso.
                                        // para verificar todos os bits a entrada deve ser deslocada
}

int main()
{

    unsigned char entrada;              // declara variavéis
    unsigned int tmp;
    unsigned int n_bits;
    unsigned char binario;
    int i, condicao;

    scanf("%x", &tmp);                  // lê entrada em haxadecimal e guarda em var temporária

    entrada = (unsigned char)tmp;       // determina o valor da var entrada como char
    n_bits = 0;                         // reseta o contador de bits

    for (i = 0; i <= 7; i++)
    {                                   // cria um loop com ordem 7
        condicao = encontra1(entrada);  // determina a var condicao como resultado da função encontra1
        if (condicao)
        {                               // lê a condição e, se for diferente de 0, incrementa o contador
            n_bits++;
        }
        entrada <<= 1;                  // desloca, a nível de bit, para esquerda a var entrada para atender
    }                                   // a função criada (encontra1)

    printf("%d\n", n_bits);             // escreve o resultado do contador
    return 0;
}
