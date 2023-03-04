#include <stdio.h>
#include <stdlib.h>

/*13.Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro.*/

int main()
{
    int altura = 8;
    printf("A altura do cilindro e: 8");
    int raio = 4;
    printf("\n\n");
    printf("O raio do cilindro e: 4");
    printf("\n\n");
    float volume = 3.14 * (raio*raio) * altura;

    printf("O volume do cilindro e: %.2f" , volume);
    printf("\n\n");
    return 0;
}
