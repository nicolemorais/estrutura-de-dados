#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

int main() {

int x;
ArvBin *raiz;
raiz = cria_arvBin();

raiz = cria_arvBin();
x = insere_arvBin(raiz, 150);
x = insere_arvBin(raiz, 110);
x = insere_arvBin(raiz, 100);
x = insere_arvBin(raiz, 130);
x = insere_arvBin(raiz, 120);
x = insere_arvBin(raiz, 140);
x = insere_arvBin(raiz, 160);

x = remove_arvBin(raiz, 100);

if(vazia_arvBin(raiz)){
    printf("A arvore esta vazia.");
}else{
    printf("A arvore possui elementos.");
}
printf("\n");


x = altura_arvBin(raiz);
printf("\n\nALTURA DA ARVORE: %d", x);

x = totalNO_arvBin(raiz);
printf("\nTOTAL DE NOS NA ARVORE: %d", x);
printf("\n");
printf("\nPre Ordem\n");
preOrdem_arvBin(raiz);
printf("\n");
printf("Em Ordem\n");
emOrdem_arvBin(raiz);
printf("\n");
printf("Pos Ordem\n");
posOrdem_arvBin(raiz);


printf("\nBUSCA NA ARVORE BINARIA:\n");
if(consulta_arvBin(raiz, 140)){
    printf("\nConsulta realizada com sucesso!\n");
}else{
    printf("\nElemento nao encontrado...\n");
}

}
