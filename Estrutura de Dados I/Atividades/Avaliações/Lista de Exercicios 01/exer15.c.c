#include <stdio.h>
#include <stdlib.h>

/*15.Receba o salário de um funcionário, calcule e imprima o valor do novo salário, sabendo que
ele recebeu um aumento de 25%.*/

int main()
{
    float salario, aumento, salFinal;

    printf("Digite o salario do funcionario: ");
    scanf("%f" , &salario);
    aumento =  salario * 0.25;
    salFinal = salario + aumento;
    printf("\n\n");
    printf("O salario com o aumento e: %.2f" ,salFinal);
    printf("\n\n");


    return 0;
}
