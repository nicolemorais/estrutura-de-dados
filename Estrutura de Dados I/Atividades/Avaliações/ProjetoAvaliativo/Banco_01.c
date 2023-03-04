#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char nome [30];
    char tipo [10];//Tipo da conta
    float saldo;

}CONTA;

CONTA coletaDados();
void relatorioDados(CONTA *vet, int n);
void pto_libera(CONTA *vet);

int main()
{
    
    CONTA *vet;
    int n;//Quantidade de vetores
    int i;//Contador

    printf("\n\t\t--------------- Banco Extort -----------------\n\n");
    printf("Insira a quantidade de contas bancarias: ");
    scanf("%d", &n);
    printf("\n");

    //Alocando memória
    vet = malloc(n * sizeof(CONTA));
    if (vet == NULL)
    {
        printf("Nao foi possivel alocar a memoria");
        exit(1);
    }

    system("pause");
    system("cls");

    printf("\n\t\t-----------------Coleta de Dados-----------------\n\n");

    //Coletando os dados para o vetor e gravando os dados em arquivo binário
    FILE *arqOut;
    CONTA;
    arqOut = fopen("banco.txt", "ab");//Cria um arquivo binário com "ab" para os dados serem adicionados no fim do arquivo
    if (arqOut == NULL)
    {
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    for(i = 0; i < n; i++)
    {
        vet[i]= coletaDados();
        fwrite(&vet, sizeof(CONTA),1,arqOut);
        system("cls");
    }
    //Fechando o arquivo binário
    fclose(arqOut);

    printf("\n\t\t-----------------Relatorio dos Dados-----------------\n\n");
    //Exibindo o relatório das contas
    relatorioDados(vet, n);

    system("pause");

    //Liberando a memória do vetor
    pto_libera(vet);

    return 0;
}

//Função para coletar
CONTA coletaDados(){
    CONTA vet;

    printf("\nInforme o ID da conta: ");
    scanf("%d", &vet.id);
    printf("Informe o nome do cliente: ");
    getchar();
    gets(vet.nome);
    printf("Informe o tipo da conta (PP - POUPANCA)(CC - CORRENTE): ");
    gets(vet.tipo);
    printf("Informe o Saldo da conta: ");
    scanf("%f", &vet.saldo);

    return vet;

}

//Função para exibir os dados
void relatorioDados(CONTA *vet, int n){

    int i;
    for (i = 0; i < n; i++){
    printf("ID da conta: %d\n", vet[i].id);
    printf("Nome do cliente: %s\n", vet[i].nome);
    printf("Tipo da conta (POUPANCA)(CORRENTE): %s\n", vet[i].tipo);
    printf("Saldo em conta: %.3f\n", vet[i].saldo);
    printf("\n\n");
    }
    printf("\n\n\n\n");
}

//Função para limpar o vetor
void pto_libera(CONTA *vet){
    free(vet);
}
