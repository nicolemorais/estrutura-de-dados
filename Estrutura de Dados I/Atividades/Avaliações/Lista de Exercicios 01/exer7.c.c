#include <stdio.h>
#include <stdlib.h>

/*7. Leia um valor em real e a cotação do dolar. Em seguida, imprima o valor correspondente em
dolares.*/

int main()
{
    float real = 26.54;
    printf("Valor em real: R$ %.2f \n", real);
    float dolar = 5.04;
    printf("Cotacao em Dolar: R$ %.2f \n", dolar);
    printf("\n");
    printf("O valor de real em dolares e de R$ %.2f\n", real*dolar);
    printf("\n");

    return 0;
}
