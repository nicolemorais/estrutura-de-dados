#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*22.Fa�a um programa para converter uma letra mai�scula em letra min�scula. Use a tabela
ASCII.*/

int main()
{
    char letra;
    printf("Digite uma letra minuscula: ");
    scanf("%c", &letra);

    letra = toupper(letra);

    printf("\nLetra em maiusculo: %c " , letra);
    printf("\n");
    return 0;
}
