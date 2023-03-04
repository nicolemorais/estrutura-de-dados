#include <stdio.h>
#include <stdlib.h>

/*23. Faça um programa para ler um número inteiro, positivo de três dígitos, e gerar outro
número formado pelos dígitos invertidos do número lido. Exemplo:
NúmeroLido = 123
NúmeroGerado = 321*/

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
