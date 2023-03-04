#include <stdio.h>
#include <stdlib.h>
#include "arvAVL.h"


int main(){
    int x;
    arvAVL *raiz;

    raiz = cria_arvAVL();
    printf("\n");


    x = insere_arvAVL(raiz, 150);
    x = insere_arvAVL(raiz, 110);
    x = insere_arvAVL(raiz, 100);
    x = insere_arvAVL(raiz, 130);
    x = insere_arvAVL(raiz, 120);
    x = insere_arvAVL(raiz, 140);
    x = insere_arvAVL(raiz, 160);


    if(vazia_arvAVL(raiz)){
        printf("A arvore esta vazia.");
    }else{
        printf("A Arvore possui elementos.");
    }
    printf("\n");

    x = altura_arvAVL(raiz);
    printf("Altura da arvore: %d", x);

    printf("\n");

    x = totalNO_arvAVL(raiz);
    printf("Total de nos na arvore: %d", x);

    printf("\nVisitando em pre-Ordem:\n");

    preOrdem_arvAVL(raiz);


    printf("\nVisitando em-Ordem:\n");

    emOrdem_arvAVL(raiz);

    printf("\nVisitando em pos-Ordem:\n");

    posOrdem_arvAVL(raiz);


    remove_arvAVL(raiz, 100);
    printf("\nVisitando em pos-Ordem depois da remocao:\n");
    posOrdem_arvAVL(raiz);


    printf("\nBusca na Arvore Binaria:\n");
    if(consulta_arvAVL(raiz, 140)){
        printf("\nConsulta realizada com sucesso!");
    }else{
        printf("\nElemento nao encontrado...");
    }


    liberar_arvAVL(raiz);
    printf("\n\n\n");
}
