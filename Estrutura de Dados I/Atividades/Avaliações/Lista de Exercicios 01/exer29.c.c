#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*29.Escreva um programa que leia as coordenadas 𝑥 e 𝑦 de pontos no plano cartesiano e
calcule sua distância da origem (0,0)*/

int main()
{
    float x = 0;
    float y = 0;
    float distancia = 0;

    printf ("Digite a coordenada x \n");
    scanf ("%f", &x);

    printf ("Digite a coordenada y \n");
    scanf ("%f", &y);

    distancia = sqrt (pow(x,2) + pow(y,2));

    printf("\nA distancia e: %f \n", distancia);

    return 0;
}
