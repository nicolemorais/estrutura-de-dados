#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*6 � Utilizando o programa do exerc�cio anterior, crie uma rotina (fun��o), para salvar o
conte�do do vetor em um arquivo de forma bin�ria, que � mais f�cil de utilizar quando
trabalhamos com vetores de estruturas. Este seu novo programa deve ser capaz de
salvar todo o conte�do gerado em uma se��o de utiliza��o, para que o mesmo conte�do
seja recuperado na pr�xima se��o de utiliza��o, ou seja, seu novo programa deve ser
capaz de recuperar todos os dados gravados em se��o anterior para continuar o
processamento.*/

typedef struct cadastro{
    char nome[30];
    int idade;
    char endereco[40];

}CADASTRO;

CADASTRO coletaDados();
void imprimeDados(CADASTRO *vet, int n);
size_t cadastro(const char * arq, CADASTRO * rec);
size_t gravar_cad(const char * arq, CADASTRO * rec);

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

    printf("\nAREA DE CADASTRO\n\n");
    //Coletando dados
    for(i = 0; i < n; i++){

        printf("\nCadastro [%d]: \n\n", i);
        vet[i]= coletaDados();
    }
    system("cls");

    printf("\nRELATORIO DOS CADASTRADOS\n\n");
    imprimeDados(vet, n);

    FILE *f = fopen("cadastro.bin", "ab");
    fwrite(&vet, n*sizeof(CADASTRO), n, f);

    fclose(f);

    free(vet);

    system("pause");
    return 0;

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

void imprimeDados(CADASTRO *vet, int n){
    int i;
    for (i = 0; i < n; i++){
    printf("Nome: %s\n", vet[i].nome);
    printf("Idade: %d\n", vet[i].idade);
    printf("Endereco: %s\n", vet[i].endereco);
    printf("\n\n\n");
    }
}

size_t cadastro(const char * arq, CADASTRO * rec){
    size_t nbytes = 0L;
    FILE * fp = fopen(arq, "wb");

    if(!fp){
        return 0;
    }
    nbytes = fwrite(rec, sizeof(CADASTRO), 1, fp);
    fclose(fp);
    return nbytes;
}

size_t gravar_cad(const char * arq, CADASTRO * rec){
    size_t nbytes = 0L;
    FILE * fp = fopen(arq, "rb");

    if(!fp){
        return 0;
    }
    nbytes = fwrite(rec, sizeof(CADASTRO), 1, fp);
        fclose(fp);
        return nbytes;
}
