#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*31.Faça um programa para ler as dimensões de um terreno (comprimento 𝑐 e largura 𝑙), bem
como o preço do metro do arame 𝑝, então fornecer como saída o custo para cercar este
mesmo terreno.*/

int main()
{
    float largura, comprimento, preco, total;

    printf("\nQual a largura do terreno: ");
    scanf("%f", &largura);
    printf("\nQual o comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("\nQual o preco do metro do arame: R$");
    scanf("%f", &preco);

    total = (comprimento * largura * preco);

    printf("\nVoce gastara R$%.2f cercar o terreno.\n", total);


    return 0;
}
