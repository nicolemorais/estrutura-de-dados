#include <stdio.h>
#include <stdlib.h>

/*19.Receba o salário-base de um funcionário, calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, paga 7% de
imposto sobre o salário-base.*/

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
