#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*45.Ler um valor de volume em litros e apresentá-lo convertido em metros cúbicos 𝑚³. A
fórmula de conversão é: 𝑀 = 𝐿/1000 , sendo 𝐿 o volume em litros e 𝑀 o volume em metros
cúbicos.*/

int main()
{
    float l, m;

    printf("\nDigite o valor em litros: ");
    scanf("%f", &l);

    m = l / 1000;

    printf("\nO valor convertido em metros cubicos e: %.2f\n",m);


    return 0;
}
