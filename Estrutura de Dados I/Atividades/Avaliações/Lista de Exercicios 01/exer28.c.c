#include <stdio.h>
#include <stdlib.h>

/*28.Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário entrar com as notas do
aluno ele deve entrar com o número de matricula do aluno. Ao final, mostrar a matricula do
aluno juntamente com a sua média e indicar se o aluno foi aprovado ou reprovado. A nota
para aprovação deve ser igual ou superior a 60 pontos.*/

int main()
{
    float nota1, nota2, nota3, mediaPonderada;
    int matricula;

    printf("Digite o numero de matricula: ");
    scanf("%d", &matricula);

    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("\n");
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("\n");
    printf("Nota 3: ");
    scanf("%f", &nota3);
    printf("\n");

    mediaPonderada = ((nota1*1) + (nota2 *1) + (nota3 * 2))/4;

    if (mediaPonderada >= 6){
        printf("\nAluno: %d" , matricula);
        printf("\nNota: %.2f" , mediaPonderada);
        printf("\nVoce foi aprovado!");

    } else {
        printf("\nAluno: %d" , matricula);
        printf("\nNota: %.2f" , mediaPonderada);
        printf("\nVoce foi reprovado!");
    }
    printf("\n");


    return 0;
}
