#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*47.Ler um valor de massa em libras e apresentá-lo convertido em quilogramas. A fórmula de
conversão é: 𝐾 = 𝐿 ∗ 0,45 , sendo 𝐾 a massa em quilogramas e 𝐿 a massa em libras.*/

int main()
{
    float lb, kg;

    printf("Digite massa em libras: ");
    scanf("%f", &lb);

    kg = lb /2.2046;

    printf("\nO valor convertido em quilogramas: %.2f\n",kg);

    return 0;
}
