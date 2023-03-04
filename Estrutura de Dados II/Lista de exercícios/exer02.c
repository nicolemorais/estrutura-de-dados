#include <stdio.h>
void insercao(int *vetor2, int n);
int busca_linear(int *vetor1, int n, int elemento);
int busca_ordenada(int *vetor2, int n, int elemento);
int busca_binaria(int *vetor2, int n, int elemento);

int main(){

    int i, n;
    int vetor1[6] = {5, 3, 2, 6, 4, 1};
    int vetor2[6] = {1, 2, 3, 4, 5, 6};

    for(i = 0; i < 6; i++)
        printf("%d ", vetor1[i]);
        printf("\n\n");
    for(i = 0; i < 6; i++)
        printf("%d ", vetor2[i]);

    printf("\n\nO valor buscado em modo LINEAR sera: %d \n", busca_linear(vetor1, 6, 4));
    printf("\n\nO valor buscado em modo ORDENADA sera: %d \n", busca_ordenada(vetor2, 6, 3));
    printf("\n\nO valor buscado em modo BINARIO sera: %d \n", busca_binaria(vetor2, 6, 6));

    printf("\n\nInserindo um novo valor no vetor..\n");
    printf("\nInforme o valor de n: ");
    scanf("%d", &n);
    insercao(vetor2, n);


    return 0;
}

void insercao(int *vetor2, int n){
    int i;
    vetor2[n+1];
    for(i = 0; i < n; i++){
        scanf("%d", &vetor2[i]);
    }
    int x;
        scanf("%d", &x);
    for(i = n-1; i >= 0 && x < vetor2[i]; i--){
        vetor2[i + 1] = vetor2[i];
    }
    vetor2[i + 1] = x;
    printf("Imprimindo o vetor com o novo valor..\n");
    for (i = 0; i < n + 1; i++){
        printf("%d ", vetor2[i]);
    }
    printf("\n");
}


int busca_linear(int *vetor1, int n, int elemento){
    int i;
    for(i = 0; i < n; i++){
        if(elemento == vetor1[i]){
            return i;
        }
    }
    return -1;
}

int busca_ordenada(int *vetor2, int n, int elemento){
    int i;
    for(i = 0; i < n; i++){
        if(elemento == vetor2[i]){
            return i;
        }else{
            if(elemento < vetor2[i]){
               return -1;
            }
        }
    }
    return -1;
}

int busca_binaria(int *vetor2, int n, int elemento){
    int i, inicio, meio, fim;
    inicio = 0;
    fim = n - 1;

    while(inicio <= fim){
        meio = (inicio + fim)/2;
        if(elemento < vetor2[meio]){
            fim = meio - 1;
        }else{
            if(elemento > vetor2[meio]){
                inicio = meio + 1;
            }else{
                return meio;
            }
        }
    }
    return -1;
}
