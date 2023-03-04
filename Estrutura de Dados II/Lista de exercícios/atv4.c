#include <stdio.h>
#include <stdlib.h>

int buscaLinear(int *vetor, int n, int elem);
int buscaOrdenada(int *vetor, int n, int elem);
int buscaBinaria(int *vetor, int n, int elem);


int main()
{

}

int buscaLinear(int *vetor, int n, int elem){
    int i;
    for (i = 0; i < n; i++){
        if(elem == vetor [i]){
            return i;
        }
    }
    return -1;
}

int buscaOrdenada(int *vetor, int n, int elem){
    int i;
    for(i = 0; i < n; i++){
        if(elem == vetor [i]){
            return i;
        }else{
            if(elem < vetor[i]){
                return -1;
            }
        }
    }
}

int buscaBinaria(int *vetor, int n, int elem){
    int i, inicio, meio, fim;
    inicio = 0;
    fim = n - 1;

    while(inicio <= fim){
        meio = (inicio + fim)/2;
        if(elem < vetor[meio]){
            fim = meio - 1; //busca na metade esquerda
        }else{
            if(elem > vetor[meio]){
                inicio = meio + 1; //busca na metade direita
            }else{
                return meio;
            }
        }
    }
    return -1; //elemento não encontrado
}
