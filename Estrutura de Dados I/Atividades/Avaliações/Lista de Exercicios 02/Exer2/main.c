#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "retangulo.h"

/*2 – Utilizando o conceito de Tipos Abstratos de Dados, crie uma estrutura chamada
Retângulo, que deverá ficar encapsulada em um módulo aparte do módulo main(),
sendo somente acessível através de seu endereço em memória. Essa estrutura deverá
conter o ponto superior esquerdo e o ponto inferior direito do retângulo (2 estruturas
Ponto). Cada coordenada é definida por uma estrutura Ponto, a qual conterá as posições
X e Y. Faça um programa leia as coordenadas do retângulo informadas pelo usuário, e
armazene-as em uma estrutura Retângulo. Em exiba a área, o comprimento da diagonal
e o perímetro desse retângulo.*/


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
