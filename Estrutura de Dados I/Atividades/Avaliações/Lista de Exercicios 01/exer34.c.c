#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*34.Ler uma temperatura em graus Kelvin e apresentá-la convertida em graus Celsius. A
fórmula de conversão é: 𝐶 = 𝐾 − 273,15, sendo 𝐶 a temperatura em Celsius e 𝐾 a
temperatura em Kelvin.*/

int main()
{

    float kelvin, celsius;

    printf("\nDigite a temperatura em Graus Kelvin: ");
    scanf("%.2f", &kelvin);

    celsius = kelvin - 273.15;

    printf("\nA temperatura em Celsius e: %.2f\n", celsius);

    return 0;
}
