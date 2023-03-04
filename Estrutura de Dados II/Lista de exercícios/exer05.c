#include <stdio.h>
#include <stdlib.h>

void Imprime_selectionSort(int *vetor, int n);
void Ordena_selectionSort(int *vetor, int n);


int main (void) {
  int vetor[] = { 120, 150, 110, 130, 100, 160, 140, 190, 180, 170};

    printf("\nVETOR DESORDENADO: ");
    Imprime_selectionSort(vetor, 10);

    printf("\n\nOrdenando por metodo selectionSort..");
    Ordena_selectionSort(vetor, 10);

    printf("\n\nVETOR JA ORDENADO: ");
    Imprime_selectionSort(vetor, 10);
    printf("\n\n");
  }

void Imprime_selectionSort(int *vetor, int n){

    int i;
    for(i=0; i < 10;i++){
    printf("%d ", vetor[i]);
    }
}

void Ordena_selectionSort(int *vetor, int n){
    int i, j, menor, troca;
    for(i = 0; i < n - 1; i++){
        menor = i;
        for(j = i + 1; j < n; j++){
            if (vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        if(i != menor){
            troca = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = troca;
        }
    }
}
