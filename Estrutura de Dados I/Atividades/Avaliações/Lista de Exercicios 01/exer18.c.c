#include <stdio.h>
#include <stdlib.h>

/*18.Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês, e imprima o valor a ser pago ao funcionário, adicionando 10% sobre o
valor calculado.*/

int main()
{
    float hrDia = 10.50;
    float hrMes;
    float bonus, salFinal;

    printf("Valor da hora de trabalho: R$ %.2f", hrDia);
    printf("\n\n");

    printf("Insira as horas trabalhadas nesse mes: ");
    scanf("%f", &hrMes);
    printf("\n\n");

    float hrstrab = hrDia * hrMes;

    bonus = hrstrab * 0.10;
    salFinal = hrstrab + bonus;

    printf("Salario final desse mes: R$ %.2f", salFinal);
    printf("\n\n");
    return 0;
}
