#include <stdio.h>
#include <stdlib.h>

/*4 - Crie uma função recursiva que receba por parâmetro dois valores inteiros x e y,
calcule e retorne o resultado de x elevado a y para o programa principal*/

int func_elev(int x, int y);

int main() {
	int x, y;

	printf("\nInforme o parametro de X: ");
	scanf("%d", &x);

	printf("\nInforme o parametro de Y: ");
	scanf("%d", &y);

	printf("\nX(%d) elevado a Y(%d) e: %d\n", x, y, func_elev(x, y));

	return 0;
}

int func_elev(int x, int y){
	if(y == 1){
        return x;
	}
	else{
        return (x * func_elev(x, y - 1));
	}
}
