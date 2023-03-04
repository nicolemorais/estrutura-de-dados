#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*49.Ler um valor de comprimento em metros e apresentá-lo convertido em jardas. A fórmula
de conversão é: 𝐽 = 𝑀/0,91 , sendo 𝐽 o comprimento em jardas e 𝑀 o comprimento em
metros.*/

int main()
{
    float jardas, metros ;

    printf("Digite o comprimento em metros: ");
    scanf("%f", &metros);

    jardas = metros /0.91;

    printf("\nO comprimento convertido em jardas: %.2f",jardas);

    return 0;
}
