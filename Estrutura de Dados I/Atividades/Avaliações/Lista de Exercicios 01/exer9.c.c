#include <stdio.h>
#include <stdlib.h>

/*9. Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
dobro.*/

int main()
{
    int num = 160;

    printf("\nNumero inteiro: %d" , num);
    printf("\n\n");
    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro e: %d ", num * 3 + 1 + num * 2 - 1);
    printf("\n\n");

    return 0;
}
