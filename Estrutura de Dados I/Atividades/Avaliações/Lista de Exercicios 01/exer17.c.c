#include <stdio.h>
#include <stdlib.h>

/*17.Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o
n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga,
sabendo-se que s�o descontados 8% para imposto de renda.*/

int main()
{
    float dias;
    float salario = 30.00;
    float IR, salfinal;

    printf("Informe os dias trabalhados do encanador: ");
    scanf("%f" , &dias);
    printf("\n\n");

    IR = salario * 0.08;
    salfinal = salario - IR;

    printf("O encanador recebera: R$%.2f" , salfinal * dias);
    printf("\n\n");
    return 0;
}
