#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*48.Ler um valor de comprimento em jardas e apresentá-lo convertido em metros. A fórmula
de conversão é: 𝑀 = 0,91 ∗ 𝐽 , sendo 𝐽 o comprimento em jardas e 𝑀 o comprimento em
metros.*/

int main()
{
    float jardas, metros ;

    printf("Digite o comprimento em metros: ");
    scanf("%f", &jardas);

    metros = jardas * 0.9144;

    printf("\nO comprimento convertido em jardas: %.2f\n",metros);

    return 0;
}
