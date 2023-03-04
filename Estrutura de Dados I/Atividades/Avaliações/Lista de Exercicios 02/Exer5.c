#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*5 - Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
e o endere�o de uma pessoa. Agora, escreva uma fun��o que receba um inteiro �n� e
retorne o ponteiro para um bloco de mem�ria de tamanho �n� bytes, alocado
dinamicamente, para ser utilizado como vetor desse tipo de estrutura. Solicite tamb�m
que o usu�rio digite os dados desse vetor dentro de uma outra fun��o especializada em
coletar dados.*/

typedef struct cadastro{
    char nome[30];
    int idade [5];
    char endereco[40];

}CADASTRO;

CADASTRO coletaDados();

int main()
{
    CADASTRO *vet;
    int n, i;

    printf("Quantos cadastros deseja fazer?: ");
    scanf("%d", &n);
    printf("\n");

    //Alocando mem�ria
    vet = malloc(n * sizeof(CADASTRO));
    if (vet == NULL)
    {
        printf("Nao foi possivel alocar a memoria");
        exit(1);
    }
    system("cls");

    //Coletando dados
    for(i = 0; i < n; i++){

        printf("Cadastro [%d]: \n", i);
        vet[i]= coletaDados();
        system("cls");
    }

}

CADASTRO coletaDados(){
    CADASTRO vet;

    printf("Informe o nome: ");
    getchar();
    gets(vet.nome);
    printf("Informe a idade: ");
    scanf("%d", &vet.idade);
    printf("Informe o endereco: ");
    getchar();
    gets(vet.endereco);

    return vet;

}
