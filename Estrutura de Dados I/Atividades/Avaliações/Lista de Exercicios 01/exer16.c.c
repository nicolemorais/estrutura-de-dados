#include <stdio.h>
#include <stdlib.h>

/*16. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

int main()
{
    float premio = 780.000;
    printf("------Valor da importancia e de R$%.3f-------", premio );
    float gan1, desc1, gan2, desc2, gan3, desc3;
    printf("\n\n");


    gan1=  premio * 0.46;
    desc1= premio - gan1;
    printf("O primeiro ganhador recebe: R$%.3f\n", desc1);
    printf("\n");
    gan2=  gan1 * 0.32;
    desc2= gan1 - gan2;
    printf("O segundo ganhador recebe: R$%.3f\n", desc2);
    printf("\n");
    desc3= gan2 - gan3;
    printf("O terceiro ganhador recebe: R$%.3f", desc3);

    printf("\n\n");
    return 0;
}
