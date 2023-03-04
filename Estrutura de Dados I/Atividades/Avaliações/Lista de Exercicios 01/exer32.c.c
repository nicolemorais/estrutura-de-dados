#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*32. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit.*/

int main()
{

    float celsius, fahrenheit;
    printf("\nDigite a temperatura em Graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    printf("\nA temperatura em Fahrenheit e: %.2f\n", fahrenheit);

    return 0;
}
