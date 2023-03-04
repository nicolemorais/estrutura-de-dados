#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*52.Ler um valor de área em metros quadrados 𝑚² e apresentá-lo convertido em hectares. A
fórmula de conversão é: 𝐻 = 𝑀 ∗ 0,0001, sendo 𝑀 a área em metros quadrados e 𝐻 a área
em hectares.*/

int main()
{
    float m2, hec;

    printf("Digite a area em m2: ");
    scanf("%f", &m2);

    hec = m2 * 0.0001;

    printf("\nA area em hectares e: %.2f",hec);


    return 0;
}
