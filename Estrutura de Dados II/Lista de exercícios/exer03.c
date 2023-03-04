#include <stdio.h>
#include <stdlib.h>

void imprime_bubblesort(int *vetor, int n);
void ordena_bubblesort(int *vetor, int n);


int main (void) {
  int vetor[] = { 120, 150, 110, 130, 100, 160, 140, 190, 180, 170};

    printf("\nVETOR DESORDENADO: ");
    imprime_bubblesort(vetor, 10);

    printf("\n\nOrdenando por metodo bubbleSort: ");
    ordena_bubblesort(vetor, 10);

    printf("\n\nVETOR JA ORDENADO: ");
    imprime_bubblesort(vetor, 10);
    printf("\n\n");
  }

void imprime_bubblesort(int *vetor, int n){

    int i;
    for(i=0; i<10;i++){
    printf("%d ", vetor[i]);
    }
}

void ordena_bubblesort(int *vetor, int n){
    int i, continua, aux, fim = n;
    do{
        continua = 0;
        for(i = 0; i < fim - 1; i++){
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                continua = i;
            }
        }
        fim--;
    }while(continua != 0);
}
