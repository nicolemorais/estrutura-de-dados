#include <stdio.h>
#include <stdlib.h>

/*14.Faça um programa que possa entrar com o valor de um produto e imprima o valor tendo
em vista que o desconto foi de 12%*/

int main()
{
    float valor, desc, valfinal;

    printf("Digite o preco do produto: ");
    scanf("%f" , &valor);
    desc =  valor * 0.12;
    valfinal = valor - desc;
    printf("\n\n");
    printf("O valor com o desconto e: %.2f" ,valfinal);
    printf("\n\n");

    return 0;
}
