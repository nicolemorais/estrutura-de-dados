#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*35.Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Kelvin. A
fórmula de conversão é: 𝐾 = 𝐶 + 273,15, sendo 𝐶 a temperatura em Celsius e 𝐾
atemperatura em Kelvin*/

int main()
{
    float celsius, kelvin;

    printf("\nDigite a temperatura em Graus Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("\nA temperatura em Kelvin e: %.2f\n", kelvin);


    return 0;
}
