#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*1 – Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
conter o número de matricula do aluno, seu nome e as notas de três provas. Agora,
escreva um programa que leia os dados de cinco alunos e os armazene-os em um bloco
de memória alocado dinamicamente. Em seguida, exiba um relatório com o nome e as
notas do aluno que possua a maior média geral dentre os cinco.*/

typedef struct{
    int matricula;
    char nome [30];
    float n1;
    float n2;
    float n3;
}ALUNO;

int main()
{
    ALUNO *vet;
    int qtd;
    int i;

    //Alocando memória dinânicamente
    vet = malloc(qtd * sizeof(ALUNO));
    if (vet == NULL)
    {
        printf("Nao foi possivel alocar a memoria");
        exit(1);
    }

    printf("ALUNOS DA DISCIPLINA DE MATEMATICA: ");

    for(i = 0; i < 5; i++){
        printf("\n\nMatricula:");
        scanf("%d", &vet[i].matricula);
        printf("\nNome do aluno:");
        getchar();
        gets(vet[i].nome);
        printf("\nNota 1:");
        scanf("%f", &vet[i].n1);
        printf("\nNota 2:");
        scanf("%f", &vet[i].n2);
        printf("\nNota 3:");
        scanf("%f", &vet[i].n3);

        system("cls");
    }

    printf("RELATORIO DAS NOTAS DE MATEMATICA: ");

    for(i = 0; i < 5; i++){
    printf("\n\nMatricula: %d\n", vet[i].matricula);
    printf("\nNome do aluno: %s\n", vet[i].nome);
    printf("\nNota da prova 1: %.1f\n", vet[i].n1);
    printf("\nNota da prova 2: %.1f\n", vet[i].n2);
    printf("\nNota da prova 3: %.1f\n", vet[i].n3);
    printf("\n\n\n");

    }
    system ("pause");
    free(vet);
}
