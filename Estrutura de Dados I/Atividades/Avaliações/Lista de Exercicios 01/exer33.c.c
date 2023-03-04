#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*33.Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius.*/

int main()
{

    float fahrenheit, celsius;
    printf("\nDigite a temperatura em Graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

    printf("\nA temperatura em Celsius e: %.2f\n", celsius);

    return 0;
}
