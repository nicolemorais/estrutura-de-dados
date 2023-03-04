#include <stdio.h>
#include <stdlib.h>

/*20. Escreva um algoritmo para criar um programa de ajuda para vendedores.
s. A partir de um valor total lido, mostre:
 O total a pagar com desconto de 10%;
 O valor de cada parcela, no parcelamento de 3 x sem juros;
 A comissão do vendedor, no caso de a venda ser a vista (5% sobre o valor com desconto)
 A comissão do vendedor, no caso de a venda ser parcelada (5% sobre o valor total)
*/

int main()
{
    float valorTotal;

    printf("Qual o valor total? ");
    scanf("%f", &valorTotal);

    float desconto, valorApagar;
    desconto = valorTotal * 0.10;
    valorApagar = valorTotal - desconto;
    printf("\nTotal a pagar com desconto: R$%.2f" , valorApagar);
    printf("\n\n");

    float parcela;
    parcela= valorTotal / 3;
    printf("Total do parcelamento em 3x sem juros: R$%.2f", parcela);
    printf("\n\n");

    float comissao;
    comissao= valorApagar * 0.05;
    printf("Comissao venda a vista: R$%.2f", comissao);
    printf("\n\n");

    float comissao2;
    comissao2= valorTotal * 0.05;
    printf("Comissao venda parcelada: R$%.2f", comissao2);
    printf("\n\n");

    return 0;
}
