#include <stdio.h>
#include <stdlib.h>

/*19.Receba o sal�rio-base de um funcion�rio, calcule e imprima o sal�rio a receber, sabendo-se
que esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base. Al�m disso, paga 7% de
imposto sobre o sal�rio-base.*/

int main()
{
    float salBase;
    float imposto, gratif, salTotal;

    printf("Insira seu salario: R$");
    scanf("%f", salBase);

    gratif = salBase * 0.05;
    imposto = salBase * 0.07;
    salTotal = salBase + gratif - imposto;

    printf("Salario a receber com ajustes:R$ %.2f", salTotal);
    printf("\n\n");

    return 0;
}
