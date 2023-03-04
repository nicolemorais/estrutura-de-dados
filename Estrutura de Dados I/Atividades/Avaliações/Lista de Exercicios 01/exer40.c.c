#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*40.Ler um ângulo em graus e apresentá-lo convertido em radianos. A fórmula de conversão é:
𝑅 = 𝐺 ∗ 𝜋/180 , sendo 𝐺 o ângulo em graus e R em radianos e 𝜋 = 3,141592.*/

int main()
{
    const double pi = 3.14;
    float graus, R;

    printf("\nDigite o valor do angulo em graus: ");
    scanf("%f", &graus);

    R = graus * pi/180;

    printf("\nO angulo convertido em radianos e: %.2f\n", R);

    return 0;
}
