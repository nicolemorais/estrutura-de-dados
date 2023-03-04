#include <stdio.h>
#include <stdlib.h>

/*8. Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.*/

int main()
{
    int num = 10;
    printf("Numero inteiro: %d \n", num);
    printf("\nAntecessor do %d: %d\n", num, num - 1);
    printf("\nSucessor do %d: %d", num, num + 1);
    printf("\n\n");

    return 0;
}
