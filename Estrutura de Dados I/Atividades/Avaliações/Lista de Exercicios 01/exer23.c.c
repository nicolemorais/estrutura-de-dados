#include <stdio.h>
#include <stdlib.h>

/*23. Fa�a um programa para ler um n�mero inteiro, positivo de tr�s d�gitos, e gerar outro
n�mero formado pelos d�gitos invertidos do n�mero lido. Exemplo:
N�meroLido = 123
N�meroGerado = 321*/

int main()
{
    int num, num1, num2, num3;
    printf("Digite um numero inteiro de 3 digitos positivo: ");
    scanf("%d", &num);
    if (num > 10){
        num1 = num%10;
        num = num/10;
        num2 = num%10;
        num = num/10;
        num3=num%10;
        num=num/10;
    }

   printf("\nNumero gerado: %d%d%d\n", num1, num2, num3);

    return 0;
}
