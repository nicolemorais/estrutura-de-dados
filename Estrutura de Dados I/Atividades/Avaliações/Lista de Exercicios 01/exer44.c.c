#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*44.Ler um valor de volume em metros cúbicos 𝑚³ e apresentá-lo convertido em litros. A
fórmula de conversão é: 𝐿 = 1000 ∗ 𝑀, sendo 𝐿 o volume em litros e 𝑀 o volume em metros
cúbicos.*/

int main()
{
    float m, l;

    printf("Digite o volume em metros cubicos e: ");
    scanf("%f", &m);

    l = 1000 * m;

    printf("\nO volume convertido em litros e: %.2f\n", l);


    return 0;
}
