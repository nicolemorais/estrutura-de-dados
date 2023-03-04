#include <stdio.h>
#include <stdlib.h>

/*3 � Crie uma fun��o recursiva que receba um n�mero inteiro �n� e imprima todos os
n�meros naturais entre 0 e �n�, em ordem crescente.*/

int nat_recur(int n);
int recur_nat(int n);


int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    system("cls");

    printf("Numeros naturais de 0 a %d: ", n);
    nat_recur(n);
    recur_nat(n);

}

//Fun��o para somar e imprimir
int nat_recur(int n){
	if(n == -1) {
		return 0;
	}
	1 + nat_recur(n - 1);
	printf("\n%d ", n);
}

//Fun��o para gerar recursividade
int recur_nat(int n){
	if(n < 0){
		return recur_nat(n * -1);
	}
	return recur_nat(n);
}
