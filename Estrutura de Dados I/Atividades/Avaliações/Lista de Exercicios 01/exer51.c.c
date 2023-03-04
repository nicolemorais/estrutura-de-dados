#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*51.Ler um valor de área em acres e apresentá-lo convertido em metros quadrados 𝑚². A
fórmula de conversão é: 𝑀 = 𝐴 ∗ 4048,58 , sendo 𝑀 a área em metros quadrados e 𝐴 a área
em acres.*/

int main()
{
    float m2, acres;

    printf("\nDigite a area em acres: ");
    scanf("%f", &acres);

    m2 = acres * 4048.58;
    printf("\nA area em m2 e: %.2f\n",m2);

    return 0;
}
