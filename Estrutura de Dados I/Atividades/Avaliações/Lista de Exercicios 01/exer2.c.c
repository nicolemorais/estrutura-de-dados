#include <stdio.h>
#include <stdlib.h>

/*2.Peça ao usuario para digitar tres valores inteiros e imprima a soma deles.
*/

int main()
{
   int num1, num2, num3, soma;

    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);
    printf("Insira o segundo valor: ");
    scanf("%d", &num2);
    printf("Insira o terceiro valor: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    printf("\n");
    printf("A soma dos 3 valores e igual: %d", soma);
    printf("\n\n");

    return 0;
}
