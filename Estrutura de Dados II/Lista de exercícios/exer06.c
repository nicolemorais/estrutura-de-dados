#include <stdio.h>
#include <stdlib.h>

void Imprime_insertionSort(int *vetor, int n);
void Ordena_insertionSort(int *vetor, int n);


int main (void) {
  int vetor[] = { 120, 150, 110, 130, 100, 160, 140, 190, 180, 170};

    printf("\nVETOR DESORDENADO: ");
    Imprime_insertionSort(vetor, 10);

    printf("\n\nOrdenando por metodo insertionSort..");
    Ordena_insertionSort(vetor, 10);

    printf("\n\nVETOR JA ORDENADO: ");
    Imprime_insertionSort(vetor, 10);
    printf("\n\n");
  }

void Imprime_insertionSort(int *vetor, int n){

    int i;
    for(i=0; i < 10;i++){
    printf("%d ", vetor[i]);
    }
}

void Ordena_insertionSort(int *vetor, int n){
    int i, j, aux;
    for(i = 1; i < n; i++){
        aux = vetor[i];
        for(j = i; (j > 0) && (aux < vetor[j-1]); j--){
            vetor[j] = vetor[j-1];
        }
        vetor[j] = aux;
    }
}
