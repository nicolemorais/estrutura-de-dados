#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"

int main()
{
    Lista *li;

    li = criaLista();
    apagaLista(li);

    x = tamLista(li);
    printf("O tamanho da lista e: %d", x);

    if(listaCheia(li)){
        printf("\nLista esta cheia!");
    }else{
        printf("\nLista esta vazia.");
    }
}
