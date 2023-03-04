#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*12.Faça um programa que receba os valores de a e b e encontre o
valor da hipotenusa através da equação. Imprima no final o resultado dessa operação.*/

int main()
{
    int num1, num2, num3;
    float hipotenusa;

    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);
    printf("Insira o segundo valor: ");
    scanf("%d", &num2);
    printf("\n\n");

    hipotenusa = sqrt((num1* num1) + (num2* num2));
    printf("A hipotenusa dos valores e igual a %.2f", hipotenusa);
    printf("\n\n");

    return 0;
}
