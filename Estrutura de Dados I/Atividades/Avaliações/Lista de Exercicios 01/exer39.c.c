#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*39.Ler uma distância em quilômetros e apresentá-la convertida em milhas. A fórmula de
conversão é: 𝑀 = 𝐾/1,61 , sendo 𝐾 a distância em quilômetros e 𝑀 em milhas.*/

int main()
{


    float km, milhas;

    printf("Digite a distancia em quilometros: ");
    scanf("%f", &km);

    milhas = km / 1.61;

    printf("\nA velocidade convertida em milhas e: %.2f", milhas);
    return 0;
}
