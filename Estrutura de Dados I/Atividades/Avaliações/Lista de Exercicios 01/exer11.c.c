#include <stdio.h>
#include <stdlib.h>

/*11.Leia o valor do raio de um circulo e calcule a area do circulo correspondente. Imprima o
resultado dessa operacao.*/

int main()
{
    int raio = 5;
    float raioquadrado = raio * raio;

    printf("O valor do raio do circulo e: %d" , raio);
    printf("\n\n");
    printf("A area do circulo e: %.2f " , 3.14* raioquadrado);
    printf("\n\n");

    return 0;
}
