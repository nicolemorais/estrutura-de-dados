#include <stdio.h>
#include <stdlib.h>

/*21.Receba a altura do degrau de uma escada e a altura que o usu�rio deseja alcan�ar subindo
a escada. Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo,
sem se preocupar com a altura do usu�rio.
*/

int main()
{
    float degrau, altura, qtd;
    printf("Insira a altura do degrau em centimetros: ");
    scanf("%f", &degrau);
    printf("Qual altura deseja alcancar em metros:");
    scanf("%f", &altura);
    qtd = (degrau*100) / altura;
    printf("\nA quantidade de degraus para alcancar a altura e de %.0f" , qtd);
    printf("\n\n");

    return 0;
}
