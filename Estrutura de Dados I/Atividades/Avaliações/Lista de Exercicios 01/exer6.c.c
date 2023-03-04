#include <stdio.h>
#include <stdlib.h>

/*6.Leia quatro notas, calcule a media aritmetica e imprima o resultado.*/

int main()
{
    float nota1 = 7.5;
    printf("Nota 1: %.1f \n", nota1);
    float nota2 = 2.0;
    printf("Nota 2: %.1f \n", nota2);
    float nota3 = 8.5;
    printf("Nota 3: %.1f \n", nota3);
    float nota4 = 3.5;
    printf("Nota 4: %.1f \n", nota4);
    printf("\n");
    printf("A media aritmetica das notas e igual a %.1f", nota1 + nota2 + nota3 + nota4 / 4);
    printf("\n\n");

    return 0;
}
