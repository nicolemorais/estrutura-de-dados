#include <stdio.h>
#include <stdlib.h>

/*30.Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
lê quanto cada apostador investiu, lê o valor do prêmio, e escreve quanto cada um ganharia.*/

int main()
{

    float amg1, amg2, amg3, arrecadado;
    float premio = 100.000;
    float aposta1, aposta2, aposta3;

    printf("\nValor da aposta do amigo 1: ");
    scanf("%f", &amg1);

    printf("\nValor da aposta do amigo 2: ");
    scanf("%f", &amg2);

    printf("\nValor da aposta do amigo 3: ");
    scanf("%f", &amg3);

    arrecadado = amg1 + amg2 + amg3;
    printf("\nValor arrecadado para aposta: %.2f" , arrecadado);

    printf("\nO valor do premio eh: %.3f" , premio);

    aposta1 = (amg1 * 100)/arrecadado;
    aposta2 = (amg2 * 100)/arrecadado;
    aposta3 = (amg3 * 100)/arrecadado;

    printf("\nAmigo 1 apostou: %.2f porcento do total arrecadado.", aposta1);
    printf("\nAmigo 2 apostou: %.2f porcento do total arrecadado.", aposta2);
    printf("\nAmigo 3 apostou: %.2f porcento do total arrecadado.", aposta3);
    printf("\n");
    printf("\nAmigo 1 recebera: R$%.3f.", premio * aposta1/100);
    printf("\nAmigo 2 recebera: R$%.3f.", premio * aposta2/100);
    printf("\nAmigo 3 recebera: R$%.3f.", premio * aposta3/100);


    return 0;
}
