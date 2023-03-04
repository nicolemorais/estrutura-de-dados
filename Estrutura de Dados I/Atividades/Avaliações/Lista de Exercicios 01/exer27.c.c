#include <stdio.h>
#include <stdlib.h>

/*27.Implemente um programa em C que calcule o ano de nascimento de uma pessoa a partir
de sua idade e do ano atual.*/

int main()
{
    int idade, anoAtual, anoNasc;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Insira em que ano estamos: ");
    scanf("%d", &anoAtual);

    anoNasc = anoAtual - idade;

    printf("Voce nasceu em: %d", anoNasc);
    printf("\n");

    return 0;
}
