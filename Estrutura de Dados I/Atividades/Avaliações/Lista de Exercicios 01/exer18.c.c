#include <stdio.h>
#include <stdlib.h>

/*18.Fa�a um programa que leia o valor da hora de trabalho (em reais) e n�mero de horas
trabalhadas no m�s, e imprima o valor a ser pago ao funcion�rio, adicionando 10% sobre o
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
