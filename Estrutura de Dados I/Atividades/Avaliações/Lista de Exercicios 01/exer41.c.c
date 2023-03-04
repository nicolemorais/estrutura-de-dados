#include <stdio.h>
#include <stdlib.h>

/*41.Ler um ângulo em radianos e apresentá-lo convertido em graus. A fórmula de conversão é:
𝐺 = 𝑅 ∗ 180/𝜋 , sendo 𝐺 o ângulo em graus e 𝑅 em radianos e 𝜋 = 3,141592.*/

int main()
{
    const double pi = 3.14;
    float graus, rad;

    printf("Digite o valor do angulo em radianos: ");
    scanf("%f", &rad);

    graus = rad * 180/pi;

    printf("\nO angulo convertido em graus e: %.2f\n", graus);

    return 0;
}
