#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*53.Ler um valor de área em hectares e apresentá-lo convertido em metros quadrados 𝑚². A
fórmula de conversão é: 𝑀 = 𝐻 ∗ 10000 , sendo 𝑀 aárea em metros quadrados e 𝐻 a área em
hectares.*/

int main()
{
    float m2, hec;

    printf("\nDigite a area em hectares: ");
    scanf("%f", &hec);

    m2 = hec * 10.000;

    printf("\nA area em m2 e: %.2f\n", m2);


    return 0;
}
