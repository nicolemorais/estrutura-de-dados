#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "retangulo.h"

/*2 � Utilizando o conceito de Tipos Abstratos de Dados, crie uma estrutura chamada
Ret�ngulo, que dever� ficar encapsulada em um m�dulo aparte do m�dulo main(),
sendo somente acess�vel atrav�s de seu endere�o em mem�ria. Essa estrutura dever�
conter o ponto superior esquerdo e o ponto inferior direito do ret�ngulo (2 estruturas
Ponto). Cada coordenada � definida por uma estrutura Ponto, a qual conter� as posi��es
X e Y. Fa�a um programa leia as coordenadas do ret�ngulo informadas pelo usu�rio, e
armazene-as em uma estrutura Ret�ngulo. Em exiba a �rea, o comprimento da diagonal
e o per�metro desse ret�ngulo.*/


int main()
{
    float a, d, pe;
    Ponto *p,*q;

    p = pto_cria(2,2);
    q = pto_cria(6,4);

    a = pto_area(p,q);
    d = pto_diagonal(p,q);
    pe = pto_perimetro(p,q);

    printf("\nAREA DO RETANGULO: %.f\n", a);
    printf("COMPRIMENTO DIAGONAL DO RETANGULO: %.3f\n", d);
    printf("PERIMETRO DO RETANGULO: %.f\n", pe);

    pto_libera(q);
    pto_libera(p);

    system("pause");
    return 0;
}
